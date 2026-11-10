/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0342a664; name: FUN_0342a664
 */


undefined8 FUN_0342a664(long *param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar5 = *(uint *)(param_1 + 1);
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2;
  lVar6 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(9,(ulong)uVar1 * 0x50);
  uVar8 = 0;
  if (lVar6 != 0) {
    lVar7 = *param_1;
    if ((lVar7 != 0) && (lVar7 != lVar6)) {
      if (uVar5 != 0) {
        lVar7 = 0;
        do {
          puVar2 = (undefined4 *)(lVar6 + lVar7);
          *(undefined2 *)(puVar2 + 10) = 0;
          *(undefined8 *)(puVar2 + 0xb) = 1;
          *(undefined8 *)(puVar2 + 0x10) = 0;
          *(undefined1 *)(puVar2 + 0x12) = 0;
          *(undefined8 *)(puVar2 + 2) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 4) = 0;
          *(undefined8 *)(puVar2 + 6) = 0x3f80000000000000;
          *(undefined8 *)(puVar2 + 8) = 0x3f800000;
          puVar3 = (undefined4 *)(*param_1 + lVar7);
          *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(puVar3 + 2);
          *puVar2 = *puVar3;
          uVar10 = *(undefined8 *)(puVar3 + 8);
          uVar8 = *(undefined8 *)(puVar3 + 4);
          uVar9 = *(undefined8 *)(puVar3 + 6);
          *(undefined2 *)(puVar2 + 10) = *(undefined2 *)(puVar3 + 10);
          *(undefined8 *)(puVar2 + 6) = uVar9;
          *(undefined8 *)(puVar2 + 8) = uVar10;
          *(undefined8 *)(puVar2 + 4) = uVar8;
          uVar8 = *(undefined8 *)(puVar3 + 0xb);
          uVar9 = *(undefined8 *)(puVar3 + 0xd);
          puVar2[0xf] = puVar3[0xf];
          *(undefined8 *)(puVar2 + 0xd) = uVar9;
          *(undefined8 *)(puVar2 + 0xb) = uVar8;
          *(undefined8 *)(puVar2 + 0x10) = 0;
          *(undefined8 *)(puVar2 + 0x10) = *(undefined8 *)(puVar3 + 0x10);
          *(undefined8 *)(puVar3 + 0x10) = 0;
          *(undefined1 *)(puVar2 + 0x12) = *(undefined1 *)(puVar3 + 0x12);
          *(undefined1 *)(puVar3 + 0x12) = 0;
          lVar4 = *param_1 + lVar7;
          if ((*(long *)(lVar4 + 0x40) != 0) && (*(char *)(lVar4 + 0x48) != '\0')) {
            (**(code **)(PTR_DAT_047e2fd0 + 0x30))(9);
            *(undefined1 *)(lVar4 + 0x48) = 0;
          }
          lVar7 = lVar7 + 0x50;
          *(undefined8 *)(lVar4 + 0x40) = 0;
        } while ((ulong)uVar5 * 0x50 != lVar7);
        lVar7 = *param_1;
      }
      (**(code **)(PTR_DAT_047e2fd0 + 0x30))(9,lVar7);
    }
    uVar8 = 1;
    *param_1 = lVar6;
    *(uint *)((long)param_1 + 0xc) = uVar1;
  }
  return uVar8;
}


