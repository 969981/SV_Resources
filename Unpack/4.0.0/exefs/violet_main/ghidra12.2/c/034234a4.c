/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034234a4; name: FUN_034234a4
 */


undefined8 FUN_034234a4(long *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  puVar6 = PTR_DAT_047e2fd0;
  uVar5 = *(uint *)(param_1 + 1);
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2;
  lVar7 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(9,(ulong)uVar1 * 0x48);
  uVar8 = 0;
  if (lVar7 != 0) {
    lVar9 = *param_1;
    if ((lVar9 != 0) && (lVar9 != lVar7)) {
      if (uVar5 != 0) {
        lVar9 = 0;
        do {
          puVar2 = (undefined8 *)(lVar7 + lVar9);
          *puVar2 = 0xffffffffffffffff;
          puVar2[1] = 0xffffffffffffffff;
          *(undefined4 *)(puVar2 + 6) = 0;
          puVar2[7] = 0;
          puVar2[8] = 0;
          puVar2[4] = 0;
          puVar2[5] = 0;
          puVar2[2] = 0;
          puVar2[3] = &PTR_LAB_047bf588;
          puVar3 = (undefined8 *)(*param_1 + lVar9);
          uVar8 = puVar3[1];
          *puVar2 = *puVar3;
          puVar2[1] = uVar8;
          *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar3 + 2);
          *(undefined4 *)((long)puVar2 + 0x14) = *(undefined4 *)((long)puVar3 + 0x14);
          puVar2[7] = puVar3[7];
          *(undefined4 *)(puVar2 + 8) = *(undefined4 *)(puVar3 + 8);
          *(undefined4 *)((long)puVar2 + 0x44) = *(undefined4 *)((long)puVar3 + 0x44);
          puVar3[7] = 0;
          puVar3[8] = 0;
          lVar4 = *param_1 + lVar9;
          if (*(long *)(lVar4 + 0x38) != 0) {
            *(undefined4 *)(lVar4 + 0x40) = 0;
            (**(code **)(puVar6 + 0x30))(9);
            *(undefined8 *)(lVar4 + 0x38) = 0;
            *(undefined4 *)(lVar4 + 0x44) = 0;
          }
          lVar9 = lVar9 + 0x48;
        } while ((ulong)uVar5 * 0x48 != lVar9);
        lVar9 = *param_1;
      }
      (**(code **)(puVar6 + 0x30))(9,lVar9);
    }
    uVar8 = 1;
    *param_1 = lVar7;
    *(uint *)((long)param_1 + 0xc) = uVar1;
  }
  return uVar8;
}


