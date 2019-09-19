module Accept = {
  type t =
    | File(string)
    | Audio
    | Video
    | Image
    | Media(string);

  let unwrap =
    fun
    | Audio => "accept=audio/*"
    | Video => "accept=video/*"
    | Image => "accept=image/*"
    | File(extesion) => "accept=" ++ extesion
    | Media(media) => "accept=" ++ media;

  type accept = t => string;
};