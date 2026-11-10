/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002fe940; name: FUN_002fe940
 */


/* WARNING: Removing unreachable block (ram,0x002fea64) */

undefined8 FUN_002fe940(long param_1,long param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 local_50;
  undefined8 local_48;
  long local_38;
  
  lVar3 = *(long *)(param_1 + 0x10);
  lVar4 = FUN_003b27a0();
  local_50 = 0;
  local_48 = 0;
  *param_3 = 0;
  if (lVar3 != 0) {
    if (lVar4 == 0) {
      return 0xc;
    }
    FUN_003b53b0(lVar4,&LAB_002ff720);
    iVar1 = FUN_003e99f0(&local_48,0,&local_50,0);
    if (iVar1 == 0) {
      FUN_003b2b40(lVar4);
      return 0xc;
    }
    FUN_003b34a0(lVar4,local_50,local_50);
    FUN_003b3890();
    if ((param_2 == 0) || (lVar3 = FUN_003b2f50(lVar4,0x37,0,param_2), lVar3 != 0)) {
      lVar3 = *(long *)(param_1 + 0x28);
      if ((lVar3 != 0) && (lVar5 = FUN_003b46b0(lVar4,0), lVar5 != 0)) {
        FUN_003005d8(&local_38,lVar3,lVar5);
        if (local_38 == 0) {
          local_38 = 0;
        }
        else {
                    /* try { // try from 002fea30 to 002fea37 has its CatchHandler @ 002feb18 */
          FUN_003b9c10(lVar4);
          lVar3 = local_38;
          local_38 = 0;
          if (lVar3 != 0) {
                    /* try { // try from 002fea44 to 002fea47 has its CatchHandler @ 002feb14 */
            FUN_003b8e30();
          }
        }
      }
      uVar2 = FUN_003b3760(lVar4);
      iVar1 = FUN_003b51b0(lVar4,uVar2);
      if (iVar1 == 2) {
        puVar6 = (undefined8 *)FUN_0038c7b0(0x40);
        *(undefined4 *)(puVar6 + 4) = 0xb;
        puVar6[6] = 0x400;
        puVar6[2] = lVar4;
        puVar6[3] = local_48;
        uVar7 = FUN_0038c7b0(0x400);
        puVar6[5] = uVar7;
        *puVar6 = &DAT_044943e0;
        if (param_1 != 0) {
          FUN_0038daa0(param_1 + 8,1);
        }
        puVar6[7] = param_1;
        *param_3 = puVar6;
        return 0;
      }
    }
    FUN_003b2b40(lVar4);
    FUN_003e8b90(local_48);
  }
  return 7;
}


