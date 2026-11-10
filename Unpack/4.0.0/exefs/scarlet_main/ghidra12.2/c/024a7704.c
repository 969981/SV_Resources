/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 024a7704; name: FUN_024a7704
 */


void FUN_024a7704(uint *param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  
  switch(*param_1 ^ (int)*param_1 >> 0x1f) {
  case 0:
    param_2 = (undefined8 *)*param_2;
    *param_2 = *(undefined8 *)(param_1 + 2);
    lVar5 = *(long *)(param_1 + 4);
    param_2[1] = lVar5;
    if (lVar5 != 0) {
      piVar1 = (int *)(lVar5 + 8);
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
    uVar4 = (**(code **)(**(long **)(param_1 + 2) + 0x10))();
    *param_2 = uVar4;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_024a7530();
  }
  return;
}


