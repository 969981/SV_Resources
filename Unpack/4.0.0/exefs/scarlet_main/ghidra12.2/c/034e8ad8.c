/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034e8ad8; name: FUN_034e8ad8
 */


void FUN_034e8ad8(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 local_40;
  undefined1 local_38;
  
  puVar2 = PTR_DAT_047e2fe8;
  plVar1 = (long *)PTR_DAT_047e7188;
  for (lVar4 = DAT_048b0740; PTR_DAT_047e7188 = (undefined *)plVar1, lVar4 != 0;
      lVar4 = *(long *)(lVar4 + 0x1e0)) {
    if (((*(long *)(lVar4 + 0x1e8) == param_1) && (uVar3 = FUN_034a5b5c(lVar4), (uVar3 & 1) == 0))
       || ((*(long *)(lVar4 + 0x250) != 0 &&
           (uVar3 = FUN_0350cff4(*(long *)(lVar4 + 0x250),param_1), (uVar3 & 1) != 0)))) {
      local_40 = 0x400000000;
      local_38 = 0;
      FUN_034a30a4(lVar4,&local_40,1);
      FUN_0345423c(*(undefined8 *)puVar2,*(undefined8 *)(lVar4 + 0x188),0,0);
    }
    plVar1 = (long *)PTR_DAT_047e7188;
  }
  if ((int)plVar1[1] != 0) {
    puVar6 = (undefined8 *)*plVar1;
    do {
      uVar5 = *puVar6;
      uVar3 = FUN_034ed9e0(uVar5,param_1);
      if ((uVar3 & 1) != 0) {
        FUN_03500ec8(uVar5);
      }
      puVar6 = puVar6 + 1;
    } while (puVar6 != (undefined8 *)(*plVar1 + (ulong)*(uint *)(plVar1 + 1) * 8));
  }
  return;
}


