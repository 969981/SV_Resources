/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004240e0; name: FUN_004240e0
 */


undefined8
FUN_004240e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  byte local_250 [55];
  byte local_219;
  undefined1 local_218;
  undefined1 auStack_217 [207];
  undefined1 auStack_148 [56];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined7 local_e7;
  undefined1 uStack_e0;
  undefined8 uStack_df;
  undefined1 auStack_d0 [56];
  undefined1 auStack_98 [56];
  
  lVar2 = FUN_0042bbc0();
  uStack_df = 0;
  uStack_e0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  local_e7 = 0;
  uStack_f0 = 0;
  uStack_108 = 0;
  local_110 = 0;
  if (lVar2 == 0) {
    return 0;
  }
  iVar1 = FUN_00423f80(local_250,0x72,param_2);
  if (iVar1 != 0) {
    local_250[0] = local_250[0] & 0xfc;
    local_219 = local_219 | 0x80;
    local_218 = 0;
    FUN_00429d40(auStack_98,local_250,0x39);
    iVar1 = FUN_00424390(lVar2,param_6,param_7,param_8);
    if (((iVar1 == 0) || (iVar1 = FUN_0042bd60(lVar2,auStack_217,0x39), iVar1 == 0)) ||
       (iVar1 = FUN_0042bd60(lVar2,param_4,param_5), iVar1 == 0)) {
      FUN_00453300(local_250,0x72);
    }
    else {
      FUN_00453300(local_250,0x72);
      iVar1 = FUN_0042beb0(lVar2,local_250,0x72);
      if (iVar1 != 0) {
        FUN_00429d40(auStack_d0,local_250,0x72);
        FUN_00453300(local_250,0x72);
        FUN_0042a300(auStack_148,auStack_d0);
        FUN_0042a300(auStack_148,auStack_148);
        FUN_00424c20(local_250,*(undefined8 *)PTR_PTR_047cd2d0,auStack_148);
        FUN_00426460(&local_110,local_250);
        FUN_00426670(local_250);
        FUN_00429d30(auStack_148);
        iVar1 = FUN_00424390(lVar2,param_6,param_7,param_8);
        if (((iVar1 != 0) && (iVar1 = FUN_0042bd60(lVar2,&local_110,0x39), iVar1 != 0)) &&
           ((iVar1 = FUN_0042bd60(lVar2,param_3,0x39), iVar1 != 0 &&
            ((iVar1 = FUN_0042bd60(lVar2,param_4,param_5), iVar1 != 0 &&
             (iVar1 = FUN_0042beb0(lVar2,local_250,0x72), iVar1 != 0)))))) {
          FUN_00429d40(auStack_148,local_250,0x72);
          FUN_00453300(local_250,0x72);
          FUN_00428fc0(auStack_148,auStack_148,auStack_98);
          FUN_004295b0(auStack_148,auStack_148,auStack_d0);
          FUN_00453300(param_1,0x72);
          *(undefined8 *)((long)param_1 + 0x31) = uStack_df;
          *(ulong *)((long)param_1 + 0x29) = CONCAT17(uStack_e0,local_e7);
          param_1[3] = uStack_f8;
          param_1[2] = local_100;
          param_1[5] = CONCAT71(local_e7,uStack_e8);
          param_1[4] = uStack_f0;
          param_1[1] = uStack_108;
          *param_1 = local_110;
          FUN_0042a0c0((long)param_1 + 0x39,auStack_148);
          FUN_00429d30(auStack_98);
          FUN_00429d30(auStack_d0);
          FUN_00429d30(auStack_148);
          uVar3 = 0xffffffff;
          goto LAB_00424360;
        }
      }
    }
  }
  uVar3 = 0;
LAB_00424360:
  FUN_0042bbe0(lVar2);
  return uVar3;
}


