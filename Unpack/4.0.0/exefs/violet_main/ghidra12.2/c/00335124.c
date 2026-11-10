/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00335124; name: FUN_00335124
 */


void FUN_00335124(long param_1,ulong *param_2)

{
  ulong uVar1;
  size_t sVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong *puVar6;
  long lVar7;
  ulong local_f0;
  ulong local_e8;
  ulong local_e0;
  ulong local_d8;
  ulong uStack_d0;
  char *local_a8;
  undefined8 uStack_a0;
  byte local_78 [8];
  ulong local_70;
  ulong local_68;
  char *local_60;
  size_t local_58;
  
  uVar5 = *param_2;
  if (1 < uVar5) {
    local_a8 = "Resolution event: ";
    uStack_a0 = 0x12;
    local_f0 = 0;
    local_e8 = 0;
    puVar6 = param_2 + 1;
    if ((uVar5 & 1) != 0) {
      puVar6 = (ulong *)param_2[1];
    }
    local_e0 = 0;
    if (uVar5 >> 1 == 0) {
      uVar5 = 0;
    }
    else {
      uVar4 = 0;
      puVar3 = &DAT_03c886bc;
      lVar7 = (uVar5 >> 1) << 3;
      do {
                    /* try { // try from 00335188 to 003351af has its CatchHandler @ 00335294 */
        FUN_0021d540(&local_f0,puVar3,uVar4);
        local_60 = (char *)*puVar6;
        sVar2 = 0;
        if (local_60 != (char *)0x0) {
          sVar2 = strlen(local_60);
        }
        local_58 = sVar2;
        FUN_00395dc0(&local_f0,&local_60);
        puVar6 = puVar6 + 1;
        lVar7 = lVar7 + -8;
        puVar3 = &DAT_03c82382;
        uVar4 = 2;
      } while (lVar7 != 0);
      uVar5 = local_f0 & 0xff;
    }
    uStack_d0 = uVar5 >> 1;
    local_d8 = (ulong)&local_f0 | 1;
    if ((uVar5 & 1) != 0) {
      uStack_d0 = local_e8;
      local_d8 = local_e0;
    }
                    /* try { // try from 003351f4 to 00335203 has its CatchHandler @ 00335290 */
    FUN_003959c0(local_78,&local_a8,&local_d8);
    if ((local_f0 & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_e0);
    }
    uVar5 = (ulong)(local_78[0] >> 1);
    uVar1 = (ulong)local_78 | 1;
    if ((local_78[0] & 1) != 0) {
      uVar5 = local_70;
      uVar1 = local_68;
    }
                    /* try { // try from 00335248 to 0033524f has its CatchHandler @ 0033527c */
    (**(code **)(**(long **)(param_1 + 0x28) + 0x28))(*(long **)(param_1 + 0x28),0,uVar1,uVar5);
    if ((local_78[0] & 1) != 0) {
      FUN_0049e790(PTR_LAB_047cba48,local_68);
    }
  }
  return;
}


