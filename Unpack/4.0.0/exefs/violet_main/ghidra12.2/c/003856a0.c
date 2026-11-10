/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003856a0; name: FUN_003856a0
 */


byte * FUN_003856a0(undefined8 *param_1,byte *param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  ulong uVar4;
  long unaff_x20;
  undefined *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x26;
  int *piVar5;
  ulong local_a0 [8];
  
  pbVar2 = (byte *)*param_1;
  if (pbVar2 <= param_2) {
    param_4 = unaff_x20;
    unaff_x24 = param_2;
    goto LAB_003856f8;
  }
  unaff_x23 = &DAT_03cdb65c;
  do {
    bVar1 = *param_2;
    if ((char)bVar1 < '\0') {
      pbVar2 = (byte *)FUN_00386050(param_1,param_2,pbVar2,local_a0);
      if (local_a0[0] >> 0x20 == 0) {
        unaff_x26 = (byte *)(local_a0[0] >> 3 & 0x1fffffff);
        uVar3 = (uint)local_a0[0];
        unaff_x24 = pbVar2;
        goto joined_r0x00385f7c;
      }
    }
    else {
      local_a0[0] = (ulong)bVar1;
      unaff_x24 = param_2 + 1;
      unaff_x26 = (byte *)(ulong)(bVar1 >> 3);
      uVar3 = (uint)bVar1;
joined_r0x00385f7c:
      if ((param_4 != 0) && (uVar4 = (ulong)*(ushort *)(param_4 + 0x12), uVar4 != 0)) {
        piVar5 = *(int **)(param_4 + 8);
        do {
          if (*piVar5 == (int)unaff_x26) break;
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 3;
        } while (uVar4 != 0);
      }
      if ((uVar3 & 7) < 6) {
                    /* WARNING: Could not recover jumptable at 0x00385780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pbVar2 = (byte *)(*(code *)(&UNK_00385784 +
                                   (ulong)*(ushort *)(unaff_x23 + (ulong)(uVar3 & 7) * 2) * 4))();
        return pbVar2;
      }
    }
    while( true ) {
      do {
        FUN_00386040(param_1);
      } while (unaff_x26 != unaff_x24);
      pbVar2 = (byte *)*param_1;
      param_2 = unaff_x24;
      if (unaff_x24 < pbVar2) break;
LAB_003856f8:
      if (unaff_x24 == pbVar2) {
        return unaff_x24;
      }
    }
  } while( true );
}


