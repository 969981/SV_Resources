/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00897480; name: FUN_00897480
 */


void FUN_00897480(undefined8 *param_1,long param_2)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  
  piVar8 = (int *)param_1[0x26];
  iVar9 = *(int *)(param_1 + 0x25);
  iVar3 = *piVar8;
  *(int *)(param_1 + 0x28) = iVar3;
  if (iVar3 < 0x316c7874) {
    if (iVar3 < 0x31696c61) {
      if (iVar3 < 0x31646e77) {
        if (iVar3 != 0x31636970) {
          iVar7 = 0x31646e62;
          goto LAB_00897688;
        }
      }
      else if (iVar3 != 0x31646e77) {
        if (iVar3 == 0x31656170) {
          if (0 < *(int *)(param_1 + 0x24)) {
            *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
          }
          lVar5 = param_1[0x1b];
          param_1[0x2a] = lVar5;
          uVar6 = 0;
          if (lVar5 != 0) {
            uVar6 = *(undefined8 *)(lVar5 + 0x18);
          }
          param_1[0x1b] = uVar6;
        }
        else if (iVar3 == 0x31657267) {
          *(int *)(param_1 + 0x2b) = *(int *)(param_1 + 0x2b) + -1;
        }
        goto LAB_00897700;
      }
    }
    else {
      if (0x316c6775 < iVar3) {
        if (iVar3 == 0x316c6776) {
          param_1[5] = piVar8;
        }
        else if (iVar3 == 0x316c6e66) {
          param_1[1] = piVar8;
        }
        else if (iVar3 == 0x316c7463) {
          param_1[4] = piVar8;
        }
        goto LAB_00897700;
      }
      if (iVar3 != 0x31696c61) {
        if (iVar3 == 0x31697073) {
          param_1[3] = piVar8;
        }
        goto LAB_00897700;
      }
    }
LAB_008976bc:
    if (iVar9 + 1 < (int)(uint)*(ushort *)(param_2 + 0x10)) {
LAB_008976cc:
      piVar1 = (int *)((long)piVar8 + (ulong)(uint)piVar8[1]);
      if (*piVar1 == 0x31647375) {
        param_1[0x27] = piVar1;
        piVar8 = piVar1;
        iVar9 = iVar9 + 1;
        goto LAB_00897700;
      }
    }
  }
  else {
    if (iVar3 < 0x3174616d) {
      if (iVar3 < 0x31726373) {
        if (iVar3 == 0x316c7874) {
          *param_1 = piVar8;
          goto LAB_00897700;
        }
        iVar7 = 0x316e6170;
LAB_00897688:
        if (iVar3 != iVar7) goto LAB_00897700;
      }
      else if (iVar3 != 0x31726373) {
        if (iVar3 == 0x31736170) {
          plVar4 = (long *)param_1[0x2a];
          param_1[0x1b] = plVar4;
          if (((*PTR_DAT_047d2190 & 1) == 0) &&
             (iVar3 = __cxa_guard_acquire(PTR_DAT_047d2190), puVar2 = PTR_DAT_047d20a0, iVar3 != 0))
          {
            if (((*PTR_DAT_047d2098 & 1) == 0) &&
               (iVar3 = __cxa_guard_acquire(PTR_DAT_047d2098), iVar3 != 0)) {
              *(undefined8 *)puVar2 = 0;
              __cxa_guard_release(PTR_DAT_047d2098);
            }
            *(undefined **)PTR_DAT_047d2198 = puVar2;
            __cxa_guard_release(PTR_DAT_047d2190);
          }
          if (plVar4 != (long *)0x0) {
            for (plVar4 = (long *)(**(code **)(*plVar4 + 0x10))(); plVar4 != (long *)0x0;
                plVar4 = (long *)*plVar4) {
              if (plVar4 == (long *)PTR_DAT_047d2198) {
                iVar3 = *(int *)(param_1 + 0x24);
                goto LAB_008977dc;
              }
            }
          }
          iVar3 = *(int *)(param_1 + 0x24);
          if (0 < iVar3) {
LAB_008977dc:
            *(int *)(param_1 + 0x24) = iVar3 + 1;
          }
        }
        else if (iVar3 == 0x31737267) {
          *(int *)(param_1 + 0x2b) = *(int *)(param_1 + 0x2b) + 1;
        }
        goto LAB_00897700;
      }
      goto LAB_008976bc;
    }
    if (iVar3 < 0x31747270) {
      if (iVar3 == 0x3174616d) {
        param_1[2] = piVar8;
        goto LAB_00897700;
      }
      if (iVar3 != 0x31746e63) {
        iVar7 = 0x31747063;
        goto LAB_00897688;
      }
      goto LAB_008976bc;
    }
    if ((iVar3 == 0x31747270) || (iVar3 == 0x31747874)) goto LAB_008976bc;
    if (iVar3 != 0x3174796c) goto LAB_00897700;
    *(int *)(param_1 + 9) = piVar8[5];
    *(int *)((long)param_1 + 0x4c) = piVar8[6];
    if (iVar9 + 1 < (int)(uint)*(ushort *)(param_2 + 0x10)) goto LAB_008976cc;
  }
  param_1[0x27] = 0;
LAB_00897700:
  *(int *)((long)param_1 + 0x144) = iVar9 + 1;
  if (iVar9 + 1 < (int)(uint)*(ushort *)(param_2 + 0x10)) {
    lVar5 = (long)piVar8 + (ulong)(uint)piVar8[1];
  }
  else {
    lVar5 = 0;
  }
  param_1[0x29] = lVar5;
  return;
}


