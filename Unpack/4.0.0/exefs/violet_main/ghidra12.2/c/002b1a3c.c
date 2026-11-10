/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 002b1a3c; name: FUN_002b1a3c
 */


/* WARNING: Removing unreachable block (ram,0x002b1c30) */

void FUN_002b1a3c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  ulong uVar5;
  ulong *puVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulong local_198;
  ulong local_188;
  ulong uStack_180;
  undefined8 uStack_170;
  int local_168;
  ulong local_160 [32];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_188 = 0;
  uStack_180 = 0;
  uStack_170 = *(undefined8 *)(param_3 + 0x28);
  iVar3 = *(int *)(param_3 + 0x30);
  uVar1 = *(ulong *)(param_3 + 0x18);
  local_198 = *(ulong *)(param_3 + 0x20);
  if (uVar1 == 0) {
    cVar4 = '\x02';
    local_168 = iVar3;
  }
  else {
    uStack_170._4_4_ = (int)((ulong)uStack_170 >> 0x20);
    local_168 = iVar3 + 1;
    if (iVar3 == uStack_170._4_4_) {
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar1 + local_198;
    }
    else {
                    /* try { // try from 002b1abc to 002b1acb has its CatchHandler @ 002b1c40 */
      auVar8 = FUN_00395dcc(&uStack_170,uVar1,local_198,0);
    }
    cVar4 = uVar1 + local_198 == auVar8._0_8_;
    uVar5 = auVar8._0_8_ - uVar1;
    uStack_180 = local_198;
    if (uVar5 <= local_198) {
      uStack_180 = uVar5;
    }
    local_198 = auVar8._8_8_ + uStack_180;
    local_188 = uVar1;
  }
  do {
    if (cVar4 == '\x02') {
      return;
    }
    puVar6 = local_160 + 1;
    lVar2 = 1;
    while( true ) {
      lVar7 = lVar2;
      puVar6[-1] = local_188;
      *puVar6 = uStack_180;
      if (cVar4 == '\x01') break;
      lVar2 = *(long *)(param_3 + 0x18);
      uVar1 = *(ulong *)(param_3 + 0x20);
      if (local_168 == uStack_170._4_4_) {
        auVar9._8_8_ = 0;
        auVar9._0_8_ = lVar2 + uVar1;
        local_168 = local_168 + 1;
      }
      else {
        local_168 = local_168 + 1;
                    /* try { // try from 002b1b90 to 002b1b9f has its CatchHandler @ 002b1c48 */
        auVar9 = FUN_00395dcc(&uStack_170,lVar2,uVar1,local_198);
      }
      if (lVar2 + uVar1 == auVar9._0_8_) {
        cVar4 = '\x01';
      }
      if (uVar1 < local_198) {
                    /* try { // try from 002b1c24 to 002b1c2f has its CatchHandler @ 002b1c3c */
                    /* WARNING: Subroutine does not return */
        FUN_00395f20("absl::string_view::substr");
      }
      local_188 = lVar2 + local_198;
      uVar5 = auVar9._0_8_ - local_188;
      uStack_180 = uVar1 - local_198;
      if (uVar5 <= uVar1 - local_198) {
        uStack_180 = uVar5;
      }
      local_198 = local_198 + auVar9._8_8_ + uStack_180;
      if ((lVar7 == 0x10) || (puVar6 = puVar6 + 2, lVar2 = lVar7 + 1, cVar4 == '\x02'))
      goto LAB_002b1b2c;
    }
    cVar4 = '\x02';
LAB_002b1b2c:
                    /* try { // try from 002b1b34 to 002b1b3f has its CatchHandler @ 002b1c44 */
    FUN_002b1c6c(param_1,param_1[1],local_160,local_160 + lVar7 * 2);
  } while( true );
}


