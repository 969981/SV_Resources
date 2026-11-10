/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0337bdf8; name: FUN_0337bdf8
 */


void FUN_0337bdf8(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)param_1[3];
  *param_1 = (long)&PTR_LAB_047ae880;
  puVar2 = PTR_DAT_047e5b60;
  if (puVar4 != (undefined8 *)0x0) {
    puVar4[0x1f] = PTR_DAT_047e5b60 + 0x10;
    FUN_031d98b8();
    *puVar4 = &PTR_FUN_047aea68;
    puVar1 = PTR_DAT_047d1a08;
    lVar3 = puVar4[0x1d];
    if ((lVar3 != 0) && (*(int *)(lVar3 + 4) != -2)) {
      (**(code **)(PTR_DAT_047d1a08 + 8))(PTR_PTR_047d1a50[8],lVar3,0);
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
  return;
}


