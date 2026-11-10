/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 016957dc; name: FUN_016957dc
 */


void FUN_016957dc(undefined1 *param_1,long param_2,short *param_3)

{
  short *psVar1;
  short *__src;
  
  __src = *(short **)(param_2 + 0x50);
  psVar1 = *(short **)(param_2 + 0x58);
  if (__src == psVar1) {
LAB_0169581c:
    *param_1 = 0;
    if (__src != psVar1) {
      memcpy(param_1 + 0x10,__src,0x28);
      *(short *)(param_1 + 0x38) = __src[0x14];
      *(short *)(param_1 + 0x3a) = __src[0x15];
      param_1[0x3c] = (char)__src[0x16];
      param_1[0x3d] = *(undefined1 *)((long)__src + 0x2d);
      param_1[0x3e] = (char)__src[0x17];
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(__src + 0x18);
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(__src + 0x1a);
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(__src + 0x1c);
      memcpy(param_1 + 0x50,__src + 0x20,0x32);
      *(undefined8 *)(param_1 + 0x90) = 0;
      *(undefined8 *)(param_1 + 0x88) = 0;
      FUN_00ca1a48(param_1 + 0x88,__src + 0x3c);
      *param_1 = 1;
    }
  }
  else {
    do {
      if (*__src == *param_3) goto LAB_0169581c;
      __src = __src + 0x68;
    } while (psVar1 != __src);
    *param_1 = 0;
  }
  return;
}


