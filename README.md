# example

```
open BsReactImageUpload;

[@react.component]
let make = () =>
  <div>
    <ImageUploader
      imgExtension=[|"png", "jpeg"|]
      withIcon=true
      buttonText="Choose a image"
      withPreview=true
      maxFileSize=5242880
    />
  </div>;
```