/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0034ebb0; name: FUN_0034ebb0
 */


void FUN_0034ebb0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  byte *pbVar4;
  byte *pbVar6;
  byte *pbVar5;
  byte local_60 [10];
  undefined6 uStack_56;
  ulong local_50;
  byte *local_48;
  byte *local_40;
  undefined8 local_38;
  
  local_38 = 0;
  local_60[0] = 0x10;
  local_60[9] = 0;
  local_48 = (byte *)0x0;
  local_40 = (byte *)0x0;
  local_60[1] = 0x43;
  local_60[2] = 0x4f;
  local_60[3] = 0x4e;
  local_60[4] = 0x4e;
  local_60[5] = 0x45;
  local_60[6] = 0x43;
  local_60[7] = 0x54;
  local_60[8] = 0x20;
                    /* try { // try from 0034ebec to 0034ebf7 has its CatchHandler @ 0034ed50 */
  FUN_0034e1b4(&local_48,local_60);
  if ((local_60[0] & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_50);
  }
                    /* try { // try from 0034ec10 to 0034ec1f has its CatchHandler @ 0034ed40 */
  FUN_0034e360(param_2,0,&local_48);
  local_60[0] = 4;
  local_60[1] = 0xd;
  local_60[2] = 10;
  local_60[3] = 0;
                    /* try { // try from 0034ec34 to 0034ec3f has its CatchHandler @ 0034ed3c */
  FUN_0034e1b4(&local_48,local_60);
  if ((local_60[0] & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_50);
  }
                    /* try { // try from 0034ec5c to 0034ec73 has its CatchHandler @ 0034ed2c */
  FUN_002b3540(local_60,local_48,local_40,&DAT_03c886bc,0);
  uVar1 = (ulong)(local_60[0] >> 1);
  uVar2 = (ulong)local_60 | 1;
  if ((local_60[0] & 1) != 0) {
    uVar1 = CONCAT62(uStack_56,CONCAT11(local_60[9],local_60[8]));
    uVar2 = local_50;
  }
                    /* try { // try from 0034ec90 to 0034ec97 has its CatchHandler @ 0034ed28 */
  FUN_003676d0(param_1,uVar2,uVar1);
  if ((local_60[0] & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_50);
  }
  pbVar4 = local_48;
  puVar3 = PTR_LAB_047cba48;
  if (local_48 != (byte *)0x0) {
    if (local_40 != local_48) {
      pbVar6 = local_40;
      do {
        pbVar5 = pbVar6 + -0x18;
        if ((*pbVar5 & 1) != 0) {
          FUN_0049e790(puVar3,*(undefined8 *)(pbVar6 + -8));
        }
        pbVar6 = pbVar5;
      } while (pbVar4 != pbVar5);
    }
    local_40 = pbVar4;
    FUN_0049e790(PTR_LAB_047cba48,local_48);
  }
  return;
}


