/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03487f38; name: FUN_03487f38
 */


undefined8 FUN_03487f38(long param_1,long *param_2,int *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 *puVar7;
  ulong uVar8;
  
  *param_2 = *param_2 + 4;
  uVar5 = FUN_03488060(param_2,param_3,param_1,1);
  if ((int)uVar5 == 1) {
    puVar7 = (undefined4 *)*param_2;
    uVar1 = *puVar7;
    *param_2 = (long)(puVar7 + 1);
    uVar3 = *(undefined1 *)(puVar7 + 1);
    *param_2 = (long)puVar7 + 5;
    uVar5 = FUN_03488210(param_1,uVar1,uVar3);
    if ((int)uVar5 == 1) {
      uVar2 = *(uint *)*param_2;
      uVar8 = (ulong)uVar2;
      *param_2 = (long)((uint *)*param_2 + 1);
      if (uVar2 != 0) {
        lVar6 = (**(code **)(PTR_DAT_047e2fd0 + 0x10))(0,uVar8 * 0x48);
        *(long *)(param_1 + 0x18) = lVar6;
        if (lVar6 == 0) {
          return 0x34;
        }
        *(uint *)(param_1 + 0x24) = uVar2;
        do {
          puVar7 = (undefined4 *)*param_2;
          uVar1 = *puVar7;
          *param_2 = (long)(puVar7 + 1);
          uVar2 = puVar7[1];
          *param_2 = (long)(puVar7 + 2);
          uVar5 = FUN_03488384(param_1,uVar1,puVar7 + 2,(ulong)uVar2);
          if ((int)uVar5 != 1) {
            return uVar5;
          }
          *param_2 = *param_2 + (ulong)uVar2 * 0xc;
          uVar4 = (int)uVar8 - 1;
          uVar8 = (ulong)uVar4;
          *param_3 = *param_3 + uVar2 * -0xc;
        } while (uVar4 != 0);
      }
      uVar5 = 1;
    }
  }
  return uVar5;
}


