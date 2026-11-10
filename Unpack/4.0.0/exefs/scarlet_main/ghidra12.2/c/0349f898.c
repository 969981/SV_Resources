/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0349f898; name: FUN_0349f898
 */


undefined8 FUN_0349f898(long param_1,ulong param_2)

{
  undefined *puVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  puVar7 = DAT_048b0118;
  if (DAT_048b0118 == (undefined8 *)0x0) {
LAB_0349fa2c:
    uVar4 = 2;
  }
  else {
    if (DAT_048b0118[5] == param_1) {
      puVar6 = (undefined8 *)0x0;
      puVar5 = DAT_048b0118;
    }
    else {
      puVar5 = DAT_048b0118;
      do {
        puVar6 = puVar5;
        puVar5 = (undefined8 *)puVar6[4];
        if (puVar5 == (undefined8 *)0x0) goto LAB_0349fa2c;
      } while (puVar5[5] != param_1);
    }
    iVar3 = *(int *)(puVar5 + 0xb);
    *(undefined4 *)(puVar5 + 0xb) = 0;
    if (iVar3 != 0) {
      DAT_048b0138 = 0;
      do {
        if (puVar7 != puVar5) {
          FUN_0349fe20(&DAT_048b0120,puVar7 + 8);
        }
        puVar7 = (undefined8 *)puVar7[4];
      } while (puVar7 != (undefined8 *)0x0);
    }
    pcVar2 = DAT_048b0140;
    if ((((param_2 & 1) != 0) && (*(int *)(puVar5 + 6) != 0xb50007)) &&
       (DAT_048b0140 != (code *)0x0)) {
      if (((DAT_048afc00 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_048afc00), iVar3 != 0)) {
        DAT_048afbf8 = PTR_DAT_047e6ff0 + 0x10;
        __cxa_guard_release(&DAT_048afc00);
      }
      (*pcVar2)(&DAT_048afbf8,*(undefined4 *)(puVar5 + 0x10),*(undefined4 *)((long)puVar5 + 0x84),1,
                1);
    }
    puVar7 = &DAT_048b0118;
    if (DAT_048b0118 != puVar5) {
      puVar7 = puVar6 + 4;
    }
    *puVar7 = puVar5[4];
    if (DAT_048b0110 == puVar5) {
      DAT_048b0110 = puVar6;
    }
    DAT_048b0108 = DAT_048b0108 + -1;
    (**(code **)*puVar5)(puVar5);
    puVar1 = PTR_DAT_047e2fd0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0,puVar5);
    if (*(int *)PTR_DAT_047e7008 != 2) {
      *(undefined4 *)PTR_DAT_047e7008 = 1;
    }
    uVar4 = 1;
    if ((DAT_048afee0 != 0) && (DAT_048b0118 == (undefined8 *)0x0)) {
      (**(code **)(puVar1 + 0x30))(0);
      DAT_048afee0 = 0;
      uVar4 = 1;
    }
  }
  return uVar4;
}


