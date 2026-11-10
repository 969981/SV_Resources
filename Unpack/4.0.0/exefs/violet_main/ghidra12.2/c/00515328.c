/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00515328; name: FUN_00515328
 */


undefined8 FUN_00515328(long *param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  byte *pbVar6;
  long lVar7;
  long lVar8;
  long local_48;
  long local_40;
  long local_38;
  
  local_38 = 0;
  local_48 = 0;
  local_40 = 0;
                    /* try { // try from 00515348 to 0051537b has its CatchHandler @ 005154a4 */
  uVar2 = FUN_00516170(param_2,&local_48);
  puVar1 = PTR_LAB_047cba48;
  if (((uVar2 & 1) == 0) || (*(char *)(param_2 + 0x24) == '\0')) {
    uVar5 = 0;
    if (local_48 != local_40) {
      uVar5 = 0;
      lVar7 = (local_40 - local_48) * 0x10000000 >> 0x20;
      lVar8 = lVar7 * 0x10;
      lVar3 = local_48 + lVar8;
      iVar4 = *(int *)(lVar3 + -0xc);
      if (iVar4 != 4) goto LAB_00515450;
      do {
        FUN_00515bcc(*(undefined8 *)(lVar3 + -8));
        while( true ) {
          if (lVar7 < 2) {
            if (local_48 == 0) {
              return 0;
            }
            goto LAB_00515398;
          }
          lVar7 = lVar7 + -1;
          lVar8 = lVar8 + -0x10;
          lVar3 = local_48 + lVar8;
          iVar4 = *(int *)(lVar3 + -0xc);
          if (iVar4 == 4) break;
LAB_00515450:
          if ((iVar4 == 3) && (pbVar6 = *(byte **)(lVar3 + -8), pbVar6 != (byte *)0x0)) {
            if ((*pbVar6 & 1) != 0) {
              FUN_0049e790(puVar1,*(undefined8 *)(pbVar6 + 0x10));
            }
            FUN_0049e790(puVar1,pbVar6);
          }
        }
      } while( true );
    }
  }
  else {
    lVar3 = *param_1;
    if (lVar3 == param_1[1]) {
      if (lVar3 != 0) {
        param_1[1] = lVar3;
        FUN_0049e790(PTR_LAB_047cba48);
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
      }
      *param_1 = local_48;
      param_1[1] = local_40;
      param_1[2] = local_38;
      local_48 = 0;
      local_38 = 0;
    }
    else {
      FUN_00514b28(param_1,param_1[1],local_48,local_40);
    }
    uVar5 = 1;
  }
  if (local_48 != 0) {
LAB_00515398:
    local_40 = local_48;
    FUN_0049e790(PTR_LAB_047cba48);
  }
  return uVar5;
}


