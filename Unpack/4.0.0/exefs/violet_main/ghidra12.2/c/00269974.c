/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00269974; name: FUN_00269974
 */


byte * FUN_00269974(long param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  
  do {
    if ((byte *)*param_3 <= param_2) {
      if ((long)param_2 - param_3[1] == (long)*(int *)((long)param_3 + 0x1c)) {
        return param_2;
      }
      auVar9 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
      param_2 = auVar9._0_8_;
      if ((auVar9._8_8_ & 1) != 0) {
        return param_2;
      }
    }
    pbVar7 = param_2 + 1;
    uVar8 = (uint)*param_2;
    if ((char)*param_2 < '\0') {
      uVar8 = (uVar8 + (uint)*pbVar7 * 0x80) - 0x80;
      if (-1 < (char)*pbVar7) {
        pbVar7 = param_2 + 2;
        goto joined_r0x00269a14;
      }
      auVar10 = FUN_0052e560(param_2,uVar8);
      if (auVar10._0_8_ == 0) {
        return (byte *)0x0;
      }
    }
    else {
joined_r0x00269a14:
      auVar10._8_4_ = uVar8;
      auVar10._0_8_ = pbVar7;
    }
    uVar8 = auVar10._8_4_;
    param_2 = auVar10._0_8_;
    if (uVar8 == 10) {
      param_2 = param_2 + -1;
      do {
        piVar5 = *(int **)(param_1 + 0x20);
        if (piVar5 == (int *)0x0) {
          iVar6 = *(int *)(param_1 + 0x1c);
LAB_00269a70:
          FUN_00532334(param_1 + 0x10,iVar6 + 1);
          piVar5 = *(int **)(param_1 + 0x20);
          iVar6 = *piVar5;
LAB_00269a84:
          *piVar5 = iVar6 + 1;
          uVar2 = FUN_0026ae18(*(undefined8 *)(param_1 + 0x10));
          iVar6 = *(int *)(param_1 + 0x18);
          *(int *)(param_1 + 0x18) = iVar6 + 1;
          *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)iVar6 * 8 + 8) = uVar2;
          param_2 = (byte *)FUN_00269b74(param_3,uVar2,param_2 + 1);
        }
        else {
          iVar1 = *(int *)(param_1 + 0x18);
          iVar6 = *piVar5;
          if (iVar6 <= iVar1) {
            if (iVar6 == *(int *)(param_1 + 0x1c)) goto LAB_00269a70;
            goto LAB_00269a84;
          }
          *(int *)(param_1 + 0x18) = iVar1 + 1;
          param_2 = (byte *)FUN_00269b74(param_3,*(undefined8 *)(piVar5 + (long)iVar1 * 2 + 2),
                                         param_2 + 1);
        }
        if (param_2 == (byte *)0x0) {
          return (byte *)0x0;
        }
      } while ((param_2 < (byte *)*param_3) && (*param_2 == 10));
    }
    else {
      if ((uVar8 == 0) || ((uVar8 & 7) == 4)) {
        *(uint *)(param_3 + 10) = uVar8 - 1;
        return param_2;
      }
      uVar4 = *(ulong *)(param_1 + 8);
      if ((uVar4 & 1) == 0) {
        lVar3 = FUN_0021d48c((ulong *)(param_1 + 8));
      }
      else {
        lVar3 = (uVar4 & 0xfffffffffffffffe) + 8;
      }
      param_2 = (byte *)FUN_0052f000(uVar8,lVar3,param_2,param_3);
      if (param_2 == (byte *)0x0) {
        return (byte *)0x0;
      }
    }
  } while( true );
}


