/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027bf9fc; name: FUN_027bf9fc
 */


void FUN_027bf9fc(undefined8 *param_1,long param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *local_38;
  long *local_18;
  
  uVar5 = FUN_019c6508();
  if ((uVar5 & 1) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    FUN_027bff38(&local_18,*(undefined8 *)(param_2 + 0x60),(undefined8 *)(param_2 + 0x60),
                 param_2 + 0x88);
    local_38 = local_18;
    if (local_18 != (long *)0x0) {
      lVar7 = local_18[6];
      if (*(long *)(lVar7 + 0x10) == 0) goto LAB_027bfabc;
      psVar1 = (short *)(lVar7 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
        *(undefined8 *)(lVar7 + 8) = uVar6;
        *(undefined4 *)(lVar7 + 0x1c) = 0xfffffffe;
      }
      else if (sVar2 == -1) goto LAB_027bfabc;
    }
    FUN_027bffcc(param_2 + 0x98,&local_38);
    FUN_01e72cdc(&local_38);
    FUN_027c0020(param_1,local_18);
    if (local_18 != (long *)0x0) {
      lVar7 = local_18[6];
      psVar1 = (short *)(lVar7 + 0x1a);
      do {
        sVar2 = *psVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(psVar1,0x10);
        if (bVar4) {
          *psVar1 = sVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (sVar2 == 1) {
        *(undefined8 *)(lVar7 + 0x10) = 0;
        (**(code **)(*local_18 + 0x50))(local_18);
      }
      else if (sVar2 == 0) {
LAB_027bfabc:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
    }
  }
  return;
}


