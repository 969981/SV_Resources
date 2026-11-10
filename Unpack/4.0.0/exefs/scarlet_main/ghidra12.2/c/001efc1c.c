/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001efc1c; name: FUN_001efc1c
 */


ulong FUN_001efc1c(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = 0;
  do {
    uVar1 = FUN_001eee20(param_1,&local_28,0);
    if ((long)uVar1 < 1) {
LAB_001efcb0:
      return uVar1 & 0xffffffff;
    }
    lVar2 = (**(code **)(param_1 + 0x7d8))
                      (param_1,local_28,uVar1,0,*(undefined8 *)(param_1 + 0x8b8));
    if (lVar2 < 0) {
      if (lVar2 == -0x1f8) {
        lVar2 = *(long *)(*(long *)(param_1 + 0x160) + 0x18) - uVar1;
        uVar1 = 0;
        *(long *)(*(long *)(param_1 + 0x160) + 0x18) = lVar2;
      }
      else {
        uVar1 = 0xfffffc7a;
      }
      goto LAB_001efcb0;
    }
    *(ulong *)(*(long *)(param_1 + 0x160) + 0x18) =
         *(long *)(*(long *)(param_1 + 0x160) + 0x18) + (lVar2 - uVar1);
  } while( true );
}


