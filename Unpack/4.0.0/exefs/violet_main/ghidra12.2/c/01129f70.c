/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01129f70; name: FUN_01129f70
 */


undefined8 FUN_01129f70(long param_1,uint param_2)

{
  uint *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  
  if (param_1 != 0) {
    uVar6 = 0;
    lVar7 = 0xf0;
    do {
      puVar1 = (uint *)(param_1 + lVar7);
      lVar7 = lVar7 + 4;
      uVar6 = *puVar1 | uVar6;
    } while (lVar7 != 0x110);
    if (uVar6 != 0) {
      if ((int)param_2 < 1) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_0011f640();
      }
      puVar2 = PTR_DAT_047cb838;
      lVar7 = 0;
      while( true ) {
        do {
          uVar6 = *(uint *)(param_1 + lVar7 * 4 + 0xf0);
          if (((uVar6 >> 8 & 1) != 0) &&
             (FUN_00120090(uVar6 & 0xfffffcff,param_2,param_1), *(long *)puVar2 != 0)) {
            FUN_00100520();
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 != 8);
        uVar6 = 0;
        lVar7 = 0xf0;
        do {
          puVar1 = (uint *)(param_1 + lVar7);
          lVar7 = lVar7 + 4;
          uVar6 = *puVar1 | uVar6;
        } while (lVar7 != 0x110);
        if ((uVar6 >> 8 & 1) == 0) break;
        if (param_2 == 0) {
          return 0;
        }
        lVar7 = 0;
        if (0 < (int)param_2) {
          iVar4 = FUN_0011f640();
          lVar7 = 0;
          if (param_2 / 1000 <= (uint)(iVar4 - iVar3)) {
            return 0;
          }
        }
      }
      *(undefined8 *)(param_1 + 0x100) = 0;
      *(undefined8 *)(param_1 + 0x108) = 0;
      *(undefined8 *)(param_1 + 0xf0) = 0;
      *(undefined8 *)(param_1 + 0xf8) = 0;
      uVar5 = FUN_0011f640();
      FUN_001023e0(param_1,uVar5);
      return 1;
    }
  }
  return 1;
}


