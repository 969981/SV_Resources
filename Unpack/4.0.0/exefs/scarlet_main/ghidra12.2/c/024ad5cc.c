/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024ad5cc; name: FUN_024ad5cc
 */


void FUN_024ad5cc(uint *param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  uint *puVar5;
  long lVar6;
  
  puVar5 = param_1 + 2;
  switch(*param_1 ^ (int)*param_1 >> 0x1f) {
  case 0:
    param_2 = (undefined8 *)*param_2;
    *param_2 = *(undefined8 *)puVar5;
    lVar6 = *(long *)(param_1 + 4);
    param_2[1] = lVar6;
    if (lVar6 != 0) {
      piVar1 = (int *)(lVar6 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    break;
  case 1:
    param_2 = (undefined8 *)*param_2;
    *param_2 = *(undefined8 *)puVar5;
    lVar6 = *(long *)(param_1 + 4);
    param_2[1] = lVar6;
    if (lVar6 != 0) {
      piVar1 = (int *)(lVar6 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    break;
  case 2:
    param_2 = (undefined8 *)*param_2;
    uVar4 = (**(code **)(**(long **)puVar5 + 0x20))();
    *param_2 = uVar4;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_024a7530();
  }
  return;
}


