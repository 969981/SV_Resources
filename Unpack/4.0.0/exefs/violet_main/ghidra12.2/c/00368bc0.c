/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00368bc0; name: FUN_00368bc0
 */


void FUN_00368bc0(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long alStack_e0 [4];
  long local_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long local_a0 [4];
  long local_80;
  ulong uStack_78;
  long lStack_70;
  long lStack_68;
  long local_60;
  ulong uStack_58;
  long lStack_50;
  long lStack_48;
  
  plVar3 = alStack_e0;
  uVar4 = *(ulong *)(param_1 + 0x20);
  lVar2 = uVar4 - param_2;
  if (uVar4 < param_2) {
LAB_00368d34:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (uVar4 == param_2) {
    FUN_00368a60(param_1,param_3);
  }
  else {
    lVar8 = *(long *)(param_3 + 0x20);
    lVar5 = *(long *)(param_1 + 0x10);
    if (lVar5 != 0) {
      uVar7 = param_2;
      while( true ) {
        plVar6 = *(long **)(param_1 + 8);
        uStack_58 = plVar6[1];
        local_60 = *plVar6;
        lStack_48 = plVar6[3];
        lStack_50 = plVar6[2];
        *(long **)(param_1 + 8) = plVar6 + 4;
        *(long *)(param_1 + 0x10) = lVar5 + -1;
        uVar1 = uStack_58 & 0xff;
        if (local_60 != 0) {
          uVar1 = uStack_58;
        }
        *(ulong *)(param_1 + 0x20) = uVar4 - uVar1;
        if (uVar7 < uVar1 || uVar7 - uVar1 == 0) break;
        local_80 = local_60;
        uStack_78 = uStack_58;
        lStack_70 = lStack_50;
        lStack_68 = lStack_48;
        FUN_003686e0(param_3,&local_80);
        lVar5 = *(long *)(param_1 + 0x10);
        if (lVar5 == 0) goto LAB_00368cf8;
        uVar4 = *(ulong *)(param_1 + 0x20);
        uVar7 = uVar7 - uVar1;
      }
      if (uVar7 == uVar1) {
        plVar3 = local_a0;
      }
      else {
        FUN_00367d00(&local_c0,&local_60,uVar7,3);
        lVar5 = *(long *)(param_1 + 8);
        *(long *)(param_1 + 8) = lVar5 + -0x20;
        *(ulong *)(lVar5 + -0x18) = uStack_b8;
        *(long *)(lVar5 + -0x20) = local_c0;
        *(undefined8 *)(lVar5 + -8) = uStack_a8;
        *(undefined8 *)(lVar5 + -0x10) = uStack_b0;
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
        uVar4 = uStack_b8 & 0xff;
        if (local_c0 != 0) {
          uVar4 = uStack_b8;
        }
        *(ulong *)(param_1 + 0x20) = uVar4 + *(long *)(param_1 + 0x20);
        uVar4 = uStack_58 & 0xff;
        if (local_60 != 0) {
          uVar4 = uStack_58;
        }
        if (uVar4 != uVar7) goto LAB_00368d34;
      }
      plVar3[1] = uStack_58;
      *plVar3 = local_60;
      plVar3[3] = lStack_48;
      plVar3[2] = lStack_50;
      FUN_003686e0(param_3);
    }
LAB_00368cf8:
    if (((*(long *)(param_3 + 0x20) != lVar8 + param_2) || (*(long *)(param_1 + 0x20) != lVar2)) ||
       (*(long *)(param_1 + 0x10) == 0)) goto LAB_00368d34;
  }
  return;
}


