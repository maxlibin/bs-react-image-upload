[@bs.module "react-images-upload"] [@react.component]
external make:
  (
    ~className: string=?,
    ~fileContainerStyle: ReactDOMRe.Style.t=?,
    ~onChange: 'b=?,
    ~buttonClassName: string=?,
    ~buttonStyles: ReactDOMRe.Style.t=?,
    ~withPreview: bool=?,
    ~accept: string=?,
    ~name: string=?,
    ~withIcon: bool=?,
    ~buttonText: string=?,
    ~withLabel: bool=?,
    ~label: bool=?,
    ~labelStyles: ReactDOMRe.Style.t=?,
    ~labelClass: string=?,
    ~imgExtension: array(string)=?,
    ~maxFileSize: int=?,
    ~fileSizeError: string=?,
    ~fileTypeError: string=?,
    ~errorClass: string=?,
    ~errorStyle: ReactDOMRe.Style.t=?,
    ~singleImage: bool=?,
    ~children: React.element=?
  ) =>
  React.element =
  "default";