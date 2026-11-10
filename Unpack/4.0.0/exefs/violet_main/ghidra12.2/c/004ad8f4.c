/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004ad8f4; name: FUN_004ad8f4
 */


void FUN_004ad8f4(long param_1,byte *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong *puVar2;
  long *plVar3;
  ulong uVar4;
  byte *pbVar5;
  byte bVar6;
  ulong uVar7;
  byte local_98 [16];
  undefined8 local_88;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  
  puVar1 = PTR_LAB_047cba48;
  bVar6 = *param_2;
  uVar4 = (ulong)bVar6;
  uVar7 = (ulong)(bVar6 >> 1);
  if ((bVar6 & 1) != 0) {
    uVar7 = *(ulong *)(param_2 + 8);
  }
  if (uVar7 == 0) {
    FUN_004aa7f4(param_1,param_3,param_4,0,"Missing name.");
    return;
  }
  uVar7 = 0;
  do {
    if ((uVar4 & 1) == 0) {
      if (uVar4 >> 1 <= uVar7) {
        return;
      }
      if (0x60 < param_2[uVar7 + 1]) {
        if (param_2[uVar7 + 1] < 0x7b) goto LAB_004ad968;
        if ((uVar4 & 1) != 0) goto LAB_004ad9f0;
      }
      if (0x40 < param_2[uVar7 + 1]) {
        if (param_2[uVar7 + 1] < 0x5b) goto LAB_004ad968;
        if ((uVar4 & 1) != 0) goto LAB_004ada18;
      }
      pbVar5 = param_2 + 1;
      if (param_2[uVar7 + 1] < 0x30) goto LAB_004ada34;
      if (0x39 < param_2[uVar7 + 1]) {
        if ((uVar4 & 1) != 0) goto LAB_004ada30;
        goto LAB_004ada34;
      }
    }
    else {
      if (*(ulong *)(param_2 + 8) <= uVar7) {
        return;
      }
      pbVar5 = *(byte **)(param_2 + 0x10);
      bVar6 = pbVar5[uVar7];
      if (0x60 < bVar6) {
        if (bVar6 < 0x7b) goto LAB_004ad968;
LAB_004ad9f0:
        pbVar5 = *(byte **)(param_2 + 0x10);
        bVar6 = pbVar5[uVar7];
      }
      if (0x40 < bVar6) {
        if (bVar6 < 0x5b) goto LAB_004ad968;
LAB_004ada18:
        pbVar5 = *(byte **)(param_2 + 0x10);
        bVar6 = pbVar5[uVar7];
      }
      if (0x2f < bVar6) {
        if (bVar6 < 0x3a) goto LAB_004ad968;
LAB_004ada30:
        pbVar5 = *(byte **)(param_2 + 0x10);
      }
LAB_004ada34:
      if (pbVar5[uVar7] != 0x5f) {
        FUN_004a8ec0(local_98,&DAT_03c246d6,param_2);
                    /* try { // try from 004ada50 to 004ada5f has its CatchHandler @ 004adb60 */
        puVar2 = (ulong *)FUN_0021d540(local_98,"\" is not a valid identifier.",0x1c);
        uStack_78 = puVar2[1];
        local_80 = *puVar2;
        local_70 = puVar2[2];
        puVar2[1] = 0;
        puVar2[2] = 0;
        *puVar2 = 0;
        plVar3 = *(long **)(param_1 + 0x10);
        if (plVar3 != (long *)0x0) {
                    /* try { // try from 004ada88 to 004ada9f has its CatchHandler @ 004adb28 */
          (**(code **)(*plVar3 + 0x10))(plVar3,param_1 + 0x38,param_3,param_4,0,&local_80);
        }
        *(undefined1 *)(param_1 + 0x30) = 1;
        if ((local_80 & 1) != 0) {
          FUN_0049e790(puVar1,local_70);
        }
        if ((local_98[0] & 1) != 0) {
          FUN_0049e790(puVar1,local_88);
        }
        uVar4 = (ulong)*param_2;
      }
    }
LAB_004ad968:
    uVar7 = uVar7 + 1;
  } while( true );
}


