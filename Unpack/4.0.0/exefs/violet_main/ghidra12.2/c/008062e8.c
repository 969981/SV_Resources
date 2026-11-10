/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008062e8; name: FUN_008062e8
 */


void FUN_008062e8(long *param_1)

{
  undefined2 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  FUN_007a537c();
  puVar2 = PTR_DAT_047d1720;
  *(undefined1 *)((long)param_1 + 0x82) = 0;
  param_1[0x11] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = (long)(puVar2 + 0x50);
  puVar2 = PTR_DAT_047d0860;
  *(undefined1 *)(param_1 + 0x12) = 0;
  uVar1 = *(undefined2 *)(*(long *)puVar2 + 0x50);
  uVar3 = FUN_0078a12c();
  lVar4 = FUN_007bf9f0(0x30,uVar3);
  if (lVar4 != 0) {
    FUN_00800d1c(lVar4,uVar1);
  }
  param_1[0x11] = lVar4;
  return;
}


