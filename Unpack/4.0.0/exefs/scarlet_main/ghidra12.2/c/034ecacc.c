/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034ecacc; name: FUN_034ecacc
 */


void FUN_034ecacc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  
  FUN_034ce468();
  puVar1 = PTR_DAT_047e2fd0;
  if (DAT_048b0878 != 0) {
    DAT_048b0880 = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(5);
    DAT_048b0878 = 0;
    DAT_048b0884 = 0;
  }
  puVar2 = PTR_DAT_047e7400;
  *(undefined8 *)PTR_DAT_047e7400 = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  FUN_03483598(PTR_DAT_047e71d0);
  if (DAT_048b0808 != 0) {
    DAT_048b0810 = 0;
    (**(code **)(puVar1 + 0x30))(5);
    DAT_048b0808 = 0;
    DAT_048b0814 = 0;
  }
  if (DAT_048b0818 != 0) {
    DAT_048b0820 = 0;
    (**(code **)(puVar1 + 0x30))(5);
    DAT_048b0818 = 0;
    DAT_048b0824 = 0;
  }
  if (DAT_048b0828 != 0) {
    DAT_048b0830 = 0;
    (**(code **)(puVar1 + 0x30))(5);
    DAT_048b0828 = 0;
    DAT_048b0834 = 0;
  }
  if (DAT_048b0838 != 0) {
    DAT_048b0840 = 0;
    (**(code **)(puVar1 + 0x30))(5);
    DAT_048b0838 = 0;
    DAT_048b0844 = 0;
  }
  puVar2 = PTR_DAT_047e6f70;
  if (*(long *)PTR_DAT_047e6f70 != 0) {
    pcVar4 = *(code **)(puVar1 + 0x30);
    *(undefined4 *)(PTR_DAT_047e6f70 + 8) = 0;
    (*pcVar4)(0);
    *(undefined8 *)puVar2 = 0;
    *(undefined4 *)(puVar2 + 0xc) = 0;
  }
  puVar2 = PTR_DAT_047e6f78;
  if (*(long *)PTR_DAT_047e6f78 != 0) {
    pcVar4 = *(code **)(puVar1 + 0x30);
    *(undefined4 *)(PTR_DAT_047e6f78 + 8) = 0;
    (*pcVar4)(0);
    *(undefined8 *)puVar2 = 0;
    *(undefined4 *)(puVar2 + 0xc) = 0;
  }
  puVar2 = PTR_DAT_047e7408;
  if (*(long *)PTR_DAT_047e7408 != 0) {
    (**(code **)(puVar1 + 0x30))(0);
    *(undefined8 *)puVar2 = 0;
  }
  puVar2 = PTR_DAT_047e7410;
  lVar3 = *(long *)PTR_DAT_047e7410;
  uVar5 = *(uint *)(PTR_DAT_047e7410 + 8);
  if (uVar5 != 0) {
    lVar7 = lVar3;
    do {
      if ((*(char *)(lVar7 + 0x24) != '\0') && (*(long *)(lVar7 + 0x18) != 0)) {
        (**(code **)(puVar1 + 0x30))(5,*(long *)(lVar7 + 0x18));
        lVar3 = *(long *)puVar2;
        uVar5 = *(uint *)(puVar2 + 8);
      }
      lVar7 = lVar7 + 0x28;
    } while (lVar7 != lVar3 + (ulong)uVar5 * 0x28);
  }
  if (lVar3 != 0) {
    pcVar4 = *(code **)(puVar1 + 0x30);
    *(undefined4 *)(puVar2 + 8) = 0;
    (*pcVar4)(0);
    *(undefined8 *)puVar2 = 0;
    *(undefined4 *)(puVar2 + 0xc) = 0;
  }
  puVar2 = PTR_DAT_047e6fb0;
  puVar6 = *(undefined8 **)PTR_DAT_047e6fb0;
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6);
    (**(code **)(puVar1 + 0x30))(0x10,puVar6);
  }
  *(undefined8 *)puVar2 = 0;
  return;
}


