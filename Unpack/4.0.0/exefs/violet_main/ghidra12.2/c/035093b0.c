/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 035093b0; name: FUN_035093b0
 */


undefined8 FUN_035093b0(long *param_1,int param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar4 = PTR_DAT_047e2fd0;
  uVar3 = *(uint *)(param_1 + 1);
  uVar1 = *(int *)((long)param_1 + 0xc) + param_2;
  lVar5 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,(ulong)uVar1 * 0x30);
  uVar6 = 0;
  if (lVar5 != 0) {
    lVar7 = *param_1;
    if ((lVar7 != 0) && (lVar7 != lVar5)) {
      if (uVar3 != 0) {
        lVar7 = 0;
        do {
          puVar2 = (undefined8 *)(lVar5 + lVar7);
          *puVar2 = 0;
          puVar2[1] = 0x2b00000000;
          *(undefined4 *)(puVar2 + 2) = 0;
          puVar2[5] = 0;
          puVar2[3] = 0;
          puVar2[4] = 0;
          FUN_03504a74(puVar2,*param_1 + lVar7);
          FUN_0350499c(*param_1 + lVar7);
          lVar7 = lVar7 + 0x30;
        } while ((ulong)uVar3 * 0x30 != lVar7);
        lVar7 = *param_1;
      }
      (**(code **)(puVar4 + 0x30))(0,lVar7);
    }
    uVar6 = 1;
    *param_1 = lVar5;
    *(uint *)((long)param_1 + 0xc) = uVar1;
  }
  return uVar6;
}


