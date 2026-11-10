/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002182a4; name: FUN_002182a4
 */


void FUN_002182a4(long *param_1,undefined *param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  param_1[1] = 0;
  puVar2 = PTR_DAT_047cbd98;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    uVar5 = *(ulong *)(param_2 + 8) & 0xfffffffffffffffe;
    uVar3 = FUN_0021d48c(param_1 + 1);
    uVar1 = (ulong)(*(byte *)(uVar5 + 8) >> 1);
    lVar6 = uVar5 + 9;
    if ((*(byte *)(uVar5 + 8) & 1) != 0) {
      uVar1 = *(ulong *)(uVar5 + 0x10);
      lVar6 = *(long *)(uVar5 + 0x18);
    }
    FUN_0021d540(uVar3,lVar6,uVar1);
  }
  if (param_2 == PTR_DAT_047cbd90) {
    param_1[2] = 0;
  }
  else {
    lVar6 = *(long *)(param_2 + 0x10);
    if (lVar6 == 0) {
      param_1[2] = 0;
      lVar6 = *(long *)(param_2 + 0x18);
    }
    else {
      lVar4 = FUN_0049e770(PTR_FUN_047cba38,0x38);
      if (lVar4 != 0) {
        FUN_0021d7c4(lVar4,lVar6);
      }
      param_1[2] = lVar4;
      lVar6 = *(long *)(param_2 + 0x18);
    }
    if (lVar6 != 0) {
      lVar4 = FUN_0049e770(PTR_FUN_047cba38,0x38);
      if (lVar4 != 0) {
        FUN_0021b394(lVar4,lVar6);
      }
      param_1[3] = lVar4;
      return;
    }
  }
  param_1[3] = 0;
  return;
}


