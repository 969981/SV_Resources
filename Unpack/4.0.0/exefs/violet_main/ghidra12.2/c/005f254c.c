/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005f254c; name: FUN_005f254c
 */


void FUN_005f254c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte local_a0;
  undefined7 uStack_9f;
  undefined8 local_90;
  long *plStack_88;
  byte local_80;
  undefined7 uStack_7f;
  undefined8 local_70;
  long *plStack_68;
  undefined8 local_30;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  uVar8 = param_2[7];
  uVar7 = param_2[6];
                    /* try { // try from 005f257c to 005f2583 has its CatchHandler @ 005f2624 */
  FUN_005f1784(&local_a0,param_2 + 8);
  local_30 = param_2[0x16];
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[7] = uVar8;
  param_1[6] = uVar7;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
                    /* try { // try from 005f25a0 to 005f25a7 has its CatchHandler @ 005f2620 */
  FUN_005f1784(param_1 + 8,&local_a0);
  param_1[0x16] = local_30;
  if ((local_80 & 1) != 0) {
    (**(code **)(*plStack_68 + 0x18))
              (plStack_68,local_70,CONCAT71(uStack_7f,local_80) & 0xfffffffffffffffe,1);
  }
  if ((local_a0 & 1) == 0) {
    return;
  }
  (**(code **)(*plStack_88 + 0x18))
            (plStack_88,local_90,CONCAT71(uStack_9f,local_a0) & 0xfffffffffffffffe,1);
  return;
}


