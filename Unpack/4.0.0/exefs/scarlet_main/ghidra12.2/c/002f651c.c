/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002f651c; name: FUN_002f651c
 */


/* WARNING: Removing unreachable block (ram,0x002f66cc) */

void FUN_002f651c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  ulong uVar4;
  ulong *puVar5;
  long lVar6;
  undefined1 auVar7 [16];
  ulong local_190;
  ulong local_180;
  ulong uStack_178;
  undefined1 local_168 [8];
  ulong local_160 [32];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_168[0] = *(undefined1 *)(param_3 + 0x28);
  uVar1 = *(ulong *)(param_3 + 0x18);
  local_190 = *(ulong *)(param_3 + 0x20);
  if (uVar1 == 0) {
    cVar3 = '\x02';
  }
  else {
                    /* try { // try from 002f656c to 002f657b has its CatchHandler @ 002f66dc */
    auVar7 = FUN_00395dcc(local_168,uVar1,local_190,0);
    cVar3 = uVar1 + local_190 == auVar7._0_8_;
    uVar4 = auVar7._0_8_ - uVar1;
    uStack_178 = local_190;
    if (uVar4 <= local_190) {
      uStack_178 = uVar4;
    }
    local_190 = auVar7._8_8_ + uStack_178;
    local_180 = uVar1;
  }
  do {
    if (cVar3 == '\x02') {
      return;
    }
    puVar5 = local_160 + 1;
    lVar2 = 1;
    while( true ) {
      lVar6 = lVar2;
      puVar5[-1] = local_180;
      *puVar5 = uStack_178;
      if (cVar3 == '\x01') break;
      lVar2 = *(long *)(param_3 + 0x18);
      uVar1 = *(ulong *)(param_3 + 0x20);
                    /* try { // try from 002f662c to 002f663b has its CatchHandler @ 002f66e4 */
      auVar7 = FUN_00395dcc(local_168,lVar2,uVar1,local_190);
      if (lVar2 + uVar1 == auVar7._0_8_) {
        cVar3 = '\x01';
      }
      if (uVar1 < local_190) {
                    /* try { // try from 002f66c0 to 002f66cb has its CatchHandler @ 002f66d8 */
                    /* WARNING: Subroutine does not return */
        FUN_00395f20("absl::string_view::substr");
      }
      local_180 = lVar2 + local_190;
      uVar4 = auVar7._0_8_ - local_180;
      uStack_178 = uVar1 - local_190;
      if (uVar4 <= uVar1 - local_190) {
        uStack_178 = uVar4;
      }
      local_190 = local_190 + auVar7._8_8_ + uStack_178;
      if ((lVar6 == 0x10) || (puVar5 = puVar5 + 2, lVar2 = lVar6 + 1, cVar3 == '\x02'))
      goto LAB_002f65e8;
    }
    cVar3 = '\x02';
LAB_002f65e8:
                    /* try { // try from 002f65f0 to 002f65fb has its CatchHandler @ 002f66e0 */
    FUN_002f6708(param_1,param_1[1],local_160,local_160 + lVar6 * 2);
  } while( true );
}


