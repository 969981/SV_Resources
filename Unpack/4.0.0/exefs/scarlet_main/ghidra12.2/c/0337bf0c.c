/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0337bf0c; name: FUN_0337bf0c
 */


void FUN_0337bf0c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  *param_1 = (long)&PTR_LAB_047ae880;
  puVar2 = PTR_DAT_047e5b60;
  puVar1 = PTR_DAT_047d1a08;
  puVar4 = (undefined8 *)param_1[3];
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[0x1f] = PTR_DAT_047e5b60 + 0x10;
    FUN_031d98b8();
    lVar3 = puVar4[0x1d];
    *puVar4 = &PTR_FUN_047aea68;
    if ((lVar3 != 0) && (*(int *)(lVar3 + 4) != -2)) {
      (**(code **)(puVar1 + 8))(PTR_PTR_047d1a50[8],lVar3,0);
      puVar4[0x1d] = &DAT_03d7702c;
      *(undefined4 *)(puVar4 + 0x1e) = 0;
    }
    *(undefined4 *)(puVar4 + 0x1c) = 0;
    if ((-1 < (int)*(uint *)((long)puVar4 + 0xe4)) && (puVar4[0x1b] != 0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                (PTR_PTR_047d1a50,puVar4[0x1b],(ulong)*(uint *)((long)puVar4 + 0xe4) << 4);
    }
    puVar4[0x1b] = 0;
    *(undefined4 *)((long)puVar4 + 0xe4) = 0x80000000;
    puVar4[0x12] = puVar2 + 0x10;
    FUN_031d98b8();
    FUN_033754a4(puVar4);
    (**(code **)(puVar1 + 8))(0,puVar4,0);
  }
  *param_1 = (long)(PTR_DAT_047d1a00 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0337c02c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar1 + 8))(0,param_1,0);
  return;
}


