/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00567e00; name: FUN_00567e00
 */


void FUN_00567e00(undefined8 *param_1,undefined8 param_2,byte *param_3)

{
  ulong uVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte local_40;
  undefined7 uStack_3f;
  undefined8 local_30;
  long *plStack_28;
  
                    /* try { // try from 00567e14 to 00567e1f has its CatchHandler @ 00567eb4 */
  FUN_00538e90(&local_40,param_2,0x2f);
  uVar1 = *(ulong *)(param_3 + 8);
  pbVar2 = *(byte **)(param_3 + 0x10);
  if ((*param_3 & 1) == 0) {
    pbVar2 = param_3 + 1;
    uVar1 = (ulong)(*param_3 >> 1);
  }
                    /* try { // try from 00567e38 to 00567e3f has its CatchHandler @ 00567e84 */
  puVar3 = (undefined8 *)FUN_0020f8d0(&local_40,pbVar2,uVar1);
  uVar4 = *puVar3;
  uVar6 = puVar3[3];
  uVar5 = puVar3[2];
  param_1[1] = puVar3[1];
  *param_1 = uVar4;
  param_1[3] = uVar6;
  param_1[2] = uVar5;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  if ((local_40 & 1) != 0) {
    (**(code **)(*plStack_28 + 0x18))
              (plStack_28,local_30,CONCAT71(uStack_3f,local_40) & 0xfffffffffffffffe,1);
  }
  return;
}


