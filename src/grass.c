/* GIMP RGB C-Source image dump (grass.c) */

static const struct {
  unsigned int 	 width;
  unsigned int 	 height;
  unsigned int 	 bytes_per_pixel; /* 2:RGB16, 3:RGB, 4:RGBA */ 
  unsigned char	 pixel_data[8 * 8 * 2 + 1];
} gimp_image = {
  8, 8, 2,
  "\000\250\000\377\000\250\000\377\000\250\000\377\000\250\000\377@\005@\005@\005\200\006\000\004@\005@\005"
  "@\005\000\004@\005@\005@\005@\005@\005@\005@\005@\005@\005@\005\000\004@\005@\005\200\006@\005@\005\000\004@\005@\005@\005"
  "@\005@\005\000\004@\005@\005\200\006@\005@\005@\005@\005@\005@\005@\005@\005\000\004@\005\000\004@\005@\005@\005\200\006"
  "@\005@\005@\005@\005@\005@\005",
};
