/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01742f70; name: FUN_01742f70
 */


void FUN_01742f70(undefined8 *param_1,long *param_2)

{
  void *__s;
  undefined4 *puVar1;
  long lVar2;
  
  __s = (void *)(**(code **)(*param_2 + 0x10))(param_2,0x3e0,0x10);
  if (__s == (void *)0x0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    puVar1 = (undefined4 *)FUN_01053840();
    lVar2 = nn::os::GetTlsValue(*puVar1);
    if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = param_2;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
    memset(__s,0,0x3e0);
    *(undefined4 *)((long)__s + 0x50) = 0;
    *(undefined8 *)((long)__s + 0x78) = 0;
    *(undefined1 **)((long)__s + 0x210) = &DAT_cbf29ce484222645;
    *(undefined1 **)((long)__s + 0x30) = &DAT_cbf29ce484222645;
    *(undefined1 **)((long)__s + 0x38) = &DAT_03c886bc;
    *(undefined4 *)((long)__s + 0x80) = 0;
    *(undefined8 *)((long)__s + 0xa8) = 0;
    *(undefined4 *)((long)__s + 0xb0) = 0;
    *(undefined4 *)((long)__s + 0xe0) = 0;
    *(undefined1 **)((long)__s + 200) = &DAT_03c886bc;
    *(undefined8 *)((long)__s + 0x108) = 0;
    *(undefined4 *)((long)__s + 0x110) = 0;
    *(undefined8 *)((long)__s + 0x138) = 0;
    *(undefined4 *)((long)__s + 0x140) = 0;
    *(undefined4 *)((long)__s + 0x170) = 0;
    *(undefined1 **)((long)__s + 0x158) = &DAT_03c886bc;
    *(undefined4 *)((long)__s + 0x1a0) = 0;
    *(undefined1 **)((long)__s + 0x188) = &DAT_03c886bc;
    *(undefined4 *)((long)__s + 0x1d0) = 0;
    *(undefined1 **)((long)__s + 0x1b8) = &DAT_03c886bc;
    *(undefined4 *)((long)__s + 0x200) = 0;
    *(undefined1 **)((long)__s + 0x1e8) = &DAT_03c886bc;
    *(undefined8 *)((long)__s + 0x208) = 0;
    *(undefined1 **)((long)__s + 0x218) = &DAT_03c886bc;
    *(undefined4 *)((long)__s + 0x230) = 0;
    *(undefined8 *)((long)__s + 0x228) = 0;
    *(undefined8 *)((long)__s + 0x220) = 0;
    *(undefined8 *)((long)__s + 0x268) = 0;
    *(undefined8 *)((long)__s + 0x260) = 0;
    *(undefined8 *)((long)__s + 600) = 0;
    *(undefined8 *)((long)__s + 0x250) = 0;
    *(undefined8 *)((long)__s + 0x2e8) = 0;
    *(undefined8 *)((long)__s + 0x2e0) = 0;
    *(undefined8 *)((long)__s + 0x2d8) = 0;
    *(undefined8 *)((long)__s + 0x2d0) = 0;
    *(undefined8 *)((long)__s + 0x368) = 0;
    *(undefined8 *)((long)__s + 0x360) = 0;
    *(undefined8 *)((long)__s + 0x358) = 0;
    *(undefined8 *)((long)__s + 0x350) = 0;
    *(undefined8 *)((long)__s + 0x58) = 0;
    *(undefined1 **)((long)__s + 0x60) = &DAT_cbf29ce484222645;
    *(undefined8 *)((long)__s + 0x88) = 0;
    *(undefined1 **)((long)__s + 0x90) = &DAT_cbf29ce484222645;
    *(undefined8 *)((long)__s + 0xb8) = 0;
    *(undefined1 **)((long)__s + 0xc0) = &DAT_cbf29ce484222645;
    *(undefined8 *)((long)__s + 0xe8) = 0;
    *(undefined1 **)((long)__s + 0xf0) = &DAT_cbf29ce484222645;
    *(undefined8 *)((long)__s + 0x118) = 0;
    *(undefined1 **)((long)__s + 0x120) = &DAT_cbf29ce484222645;
    *(undefined8 *)((long)__s + 0x148) = 0;
    *(undefined1 **)((long)__s + 0x150) = &DAT_cbf29ce484222645;
    *(undefined8 *)((long)__s + 0x178) = 0;
    *(undefined1 **)((long)__s + 0x180) = &DAT_cbf29ce484222645;
    *(undefined8 *)((long)__s + 0x1a8) = 0;
    *(undefined1 **)((long)__s + 0x1b0) = &DAT_cbf29ce484222645;
    *(undefined8 *)((long)__s + 0x1d8) = 0;
    *(undefined1 **)((long)__s + 0x1e0) = &DAT_cbf29ce484222645;
    *(undefined4 *)((long)__s + 0x3d4) = 0xffffffff;
    *(undefined8 *)((long)__s + 0x40) = 0;
    *(undefined8 *)((long)__s + 0x48) = 0;
    *(undefined1 **)((long)__s + 0x68) = &DAT_03c886bc;
    *(undefined8 *)((long)__s + 0x70) = 0;
    *(undefined1 **)((long)__s + 0x98) = &DAT_03c886bc;
    *(undefined8 *)((long)__s + 0xa0) = 0;
    *(undefined8 *)((long)__s + 0xd0) = 0;
    *(undefined8 *)((long)__s + 0xd8) = 0;
    *(undefined1 **)((long)__s + 0xf8) = &DAT_03c886bc;
    *(undefined8 *)((long)__s + 0x100) = 0;
    *(undefined1 **)((long)__s + 0x128) = &DAT_03c886bc;
    *(undefined8 *)((long)__s + 0x130) = 0;
    *(undefined8 *)((long)__s + 0x160) = 0;
    *(undefined8 *)((long)__s + 0x168) = 0;
    *(undefined8 *)((long)__s + 400) = 0;
    *(undefined8 *)((long)__s + 0x198) = 0;
    *(undefined8 *)((long)__s + 0x1c0) = 0;
    *(undefined8 *)((long)__s + 0x1c8) = 0;
    *(undefined8 *)((long)__s + 0x1f0) = 0;
    *(undefined8 *)((long)__s + 0x1f8) = 0;
    *param_1 = __s;
    param_1[1] = param_2;
    param_1[2] = 0x3e0;
    param_1[3] = 0x10;
    *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
  }
  return;
}


