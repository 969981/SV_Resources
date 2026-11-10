/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004616c0; name: FUN_004616c0
 */


bool FUN_004616c0(long param_1,long param_2,ulong param_3,undefined4 param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  time_t tVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long local_28;
  
  local_28 = 0;
  if (*(int *)(param_1 + 0x98) == 0) {
    uVar7 = 0x73;
    uVar8 = 0x1a2;
LAB_00461750:
    FUN_004806c0(0x24,0x6e,uVar7,"external/openssl/crypto/rand/drbg_lib.c",uVar8);
    return false;
  }
  if (*(int *)(param_1 + 0x98) == 2) {
    uVar7 = 0x72;
    uVar8 = 0x19e;
    goto LAB_00461750;
  }
  if (param_2 == 0) {
    param_3 = 0;
  }
  else if (*(ulong *)(param_1 + 0x68) < param_3) {
    uVar7 = 0x66;
    uVar8 = 0x1a9;
    goto LAB_00461750;
  }
  *(undefined4 *)(param_1 + 0x98) = 2;
  if (*(code **)(param_1 + 0x158) == (code *)0x0) {
    uVar5 = 0;
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_004617b4;
  }
  else {
    uVar5 = (**(code **)(param_1 + 0x158))
                      (param_1,&local_28,*(undefined4 *)(param_1 + 0x30),
                       *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),param_4);
    if (*(ulong *)(param_1 + 0x40) <= uVar5) {
LAB_004617b4:
      if (uVar5 <= *(ulong *)(param_1 + 0x48)) {
        iVar4 = (**(code **)(*(long *)(param_1 + 0x150) + 8))
                          (param_1,local_28,uVar5,param_2,param_3);
        if (iVar4 != 0) {
          *(undefined4 *)(param_1 + 0x98) = 1;
          *(undefined4 *)(param_1 + 0x70) = 1;
          tVar6 = time((time_t *)0x0);
          *(time_t *)(param_1 + 0x78) = tVar6;
          if (*(int *)(param_1 + 0x88) != 0) {
            piVar1 = (int *)(param_1 + 0x8c);
            if (*(long *)(param_1 + 8) == 0) {
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = *piVar1 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            else {
              *piVar1 = *(int *)(*(long *)(param_1 + 8) + 0x8c);
            }
          }
        }
        goto LAB_004617dc;
      }
    }
  }
  FUN_004806c0(0x24,0x6e,0x6e,"external/openssl/crypto/rand/drbg_lib.c",0x1b5);
LAB_004617dc:
  if ((local_28 != 0) && (*(code **)(param_1 + 0x160) != (code *)0x0)) {
    (**(code **)(param_1 + 0x160))(param_1,local_28,uVar5);
  }
  return *(int *)(param_1 + 0x98) == 1;
}


