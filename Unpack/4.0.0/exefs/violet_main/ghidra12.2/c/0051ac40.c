/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0051ac40; name: FUN_0051ac40
 */


void FUN_0051ac40(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_e0 [8];
  long *local_d8;
  byte local_d0;
  undefined8 local_c0;
  int local_b8;
  undefined1 auStack_a0 [8];
  long *local_98;
  byte local_90 [16];
  undefined8 local_80;
  int local_78;
  
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
                    /* try { // try from 0051ac74 to 0051ac87 has its CatchHandler @ 0051aec0 */
  FUN_004f89ac(auStack_a0,param_3,param_2);
  puVar1 = PTR_LAB_047cba48;
  while( true ) {
                    /* try { // try from 0051acd0 to 0051ace3 has its CatchHandler @ 0051aee4 */
    FUN_004f8d50(auStack_e0,param_3,param_2,param_4);
                    /* try { // try from 0051acf0 to 0051acfb has its CatchHandler @ 0051aeec */
    uVar2 = (**(code **)(*local_98 + 0x28))(local_98,auStack_a0,auStack_e0);
                    /* try { // try from 0051ad0c to 0051ad13 has its CatchHandler @ 0051af2c */
    (**(code **)(*local_d8 + 0x80))(local_d8,auStack_e0);
    if ((local_b8 == 9) && ((local_d0 & 1) != 0)) {
      FUN_0049e790(puVar1,local_c0);
    }
    if ((uVar2 & 1) != 0) break;
    lVar6 = param_1[1];
    if (lVar6 == param_1[2]) {
      lVar6 = lVar6 - *param_1 >> 5;
      uVar2 = lVar6 + 1;
      if (uVar2 >> 0x3b != 0) {
                    /* try { // try from 0051aea4 to 0051aeab has its CatchHandler @ 0051aeac */
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar4 = param_1[2] - *param_1;
      uVar5 = lVar4 >> 4;
      if (uVar2 <= uVar5) {
        uVar2 = uVar5;
      }
      if (0x3fffffffffffffe < (ulong)(lVar4 >> 5)) {
        uVar2 = 0x7ffffffffffffff;
      }
      lVar3 = FUN_0049e770(PTR_FUN_047cba38,uVar2 * 0x20);
      lVar4 = lVar3 + lVar6 * 0x20;
      *(undefined4 *)(lVar4 + 0x18) = 0;
                    /* try { // try from 0051ad9c to 0051ada7 has its CatchHandler @ 0051aec8 */
      FUN_004fe9d4(lVar4,local_90);
      lVar8 = *param_1;
      lVar7 = param_1[1];
      lVar6 = lVar4 + 0x20;
      if (lVar7 == lVar8) {
        lVar7 = lVar8;
      }
      else {
        do {
          lVar7 = lVar7 + -0x20;
          *(undefined4 *)(lVar4 + -8) = 0;
                    /* try { // try from 0051adc4 to 0051adcb has its CatchHandler @ 0051af40 */
          FUN_004fe9d4(lVar4 + -0x20,lVar7);
          lVar4 = lVar4 + -0x20;
        } while (lVar8 != lVar7);
        lVar8 = param_1[1];
        lVar7 = *param_1;
      }
      param_1[2] = lVar3 + uVar2 * 0x20;
      *param_1 = lVar4;
      param_1[1] = lVar6;
      while (lVar6 = lVar8, lVar6 != lVar7) {
        lVar8 = lVar6 + -0x20;
        if ((*(int *)(lVar6 + -8) == 9) && ((*(byte *)(lVar6 + -0x20) & 1) != 0)) {
          FUN_0049e790(puVar1,*(undefined8 *)(lVar6 + -0x10));
        }
      }
      if (lVar7 != 0) {
        FUN_0049e790(puVar1,lVar7);
      }
    }
    else {
      *(undefined4 *)(lVar6 + 0x18) = 0;
                    /* try { // try from 0051aca8 to 0051acb3 has its CatchHandler @ 0051aed4 */
      FUN_004fe9d4(lVar6,local_90);
      param_1[1] = lVar6 + 0x20;
    }
                    /* try { // try from 0051acc8 to 0051accf has its CatchHandler @ 0051aee0 */
    (**(code **)(*local_98 + 0x90))(local_98,auStack_a0);
  }
                    /* try { // try from 0051ae4c to 0051ae53 has its CatchHandler @ 0051aeb4 */
  (**(code **)(*local_98 + 0x80))(local_98,auStack_a0);
  if ((local_78 == 9) && ((local_90[0] & 1) != 0)) {
    FUN_0049e790(PTR_LAB_047cba48,local_80);
  }
                    /* try { // try from 0051ae7c to 0051ae83 has its CatchHandler @ 0051aeb0 */
  FUN_0051da90(*param_1,param_1[1],auStack_a0);
  return;
}


