/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f6e5a0; name: FUN_01f6e5a0
 */


void FUN_01f6e5a0(undefined8 *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  byte *pbVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  
  pbVar8 = (byte *)*param_1;
  if (pbVar8 != (byte *)0x0) {
    lVar3 = tpidr_el0;
    if ((byte *)param_1[1] == pbVar8) {
      pbVar6 = pbVar8;
    }
    else {
      pbVar6 = (byte *)param_1[1];
      do {
        pbVar9 = pbVar6 + -0x18;
        if (((*pbVar9 & 1) != 0) && (lVar7 = *(long *)(pbVar6 + -8), lVar7 != 0)) {
          plVar5 = *(long **)(lVar3 + 0x30);
          if (plVar5 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar5 = DAT_04859430;
            *(long **)(lVar3 + 0x30) = DAT_04859430;
          }
          uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
          if ((uVar2 & 1) != 0) {
            lVar4 = FUN_00c4e600();
            if (0 < *(int *)(lVar4 + 0x12c8)) {
              FUN_00c48fe8(plVar5,lVar7,0,8);
              goto LAB_01f6e5f4;
            }
          }
          (**(code **)(*plVar5 + 0x18))(plVar5,lVar7,0,8);
        }
LAB_01f6e5f4:
        pbVar6 = pbVar9;
      } while (pbVar8 != pbVar9);
      pbVar6 = (byte *)*param_1;
    }
    param_1[1] = pbVar8;
    if (pbVar6 != (byte *)0x0) {
      plVar5 = *(long **)(lVar3 + 0x30);
      if (plVar5 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar5 = DAT_04859430;
        *(long **)(lVar3 + 0x30) = DAT_04859430;
      }
      uVar2 = (**(code **)(*plVar5 + 0xf8))(plVar5);
      if ((uVar2 & 1) != 0) {
        lVar3 = FUN_00c4e600();
        if (0 < *(int *)(lVar3 + 0x12c8)) {
          FUN_00c48fe8(plVar5,pbVar6,0,8);
          return;
        }
      }
                    /* WARNING: Could not recover jumptable at 0x01f6e6c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x18))(plVar5,pbVar6,0,8);
      return;
    }
  }
  return;
}


