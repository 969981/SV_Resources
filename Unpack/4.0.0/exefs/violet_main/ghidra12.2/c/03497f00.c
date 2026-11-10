/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03497f00; name: FUN_03497f00
 */


int FUN_03497f00(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 != 0) {
    uVar2 = 0;
    uVar6 = (uint)*param_2;
    if (uVar1 != 0) {
      uVar2 = uVar6 / uVar1;
    }
    for (puVar5 = *(undefined8 **)(*param_1 + (ulong)(uVar6 - uVar2 * uVar1) * 8);
        puVar5 != (undefined8 *)0x0; puVar5 = (undefined8 *)puVar5[3]) {
      if (puVar5[2] == *param_2) {
        if (*(uint *)(puVar5 + 1) == 0) {
          return 1;
        }
        lVar9 = (ulong)*(uint *)(puVar5 + 1) << 3;
        iVar8 = 1;
        puVar5 = (undefined8 *)*puVar5;
        do {
          uVar7 = *puVar5;
          iVar4 = FUN_0348bdb4(uVar7,param_2,param_3,param_1[3],param_4);
          uStack_70 = 0;
          uStack_64 = *(undefined4 *)((long)param_2 + 0x14);
          bVar3 = iVar8 != 1;
          iVar8 = 1;
          if (iVar4 != 1 || bVar3) {
            iVar8 = 2;
          }
          local_68 = 3;
          local_78 = uVar7;
          FUN_03497f00(param_1,&local_78,param_3,param_4);
          lVar9 = lVar9 + -8;
          puVar5 = puVar5 + 1;
        } while (lVar9 != 0);
        return iVar8;
      }
    }
  }
  return 1;
}


