/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00367e30; name: FUN_00367e30
 */


void FUN_00367e30(undefined8 *param_1,long *param_2,ulong param_3)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  size_t __n;
  undefined8 *puVar4;
  long *plVar5;
  byte *pbVar6;
  long lVar7;
  
  lVar7 = *param_2;
  if (lVar7 == 0) {
    pbVar6 = (byte *)(param_2 + 1);
    if (param_3 <= *pbVar6) {
      uVar3 = (uint)*pbVar6 - (int)param_3;
      *param_1 = 0;
      *(char *)(param_1 + 1) = (char)uVar3;
      memcpy((void *)((long)param_1 + 9),pbVar6 + param_3 + 1,(ulong)uVar3 & 0xff);
      *pbVar6 = (byte)param_3;
      return;
    }
  }
  else {
    __n = param_2[1] - param_3;
    if (param_3 <= (ulong)param_2[1]) {
      if (__n < 0x17) {
        *param_1 = 0;
        *(char *)(param_1 + 1) = (char)__n;
        memcpy((void *)((long)param_1 + 9),(void *)(param_2[2] + param_3),__n);
        *param_2 = *(long *)(lVar7 + 0x10);
      }
      else {
        puVar4 = *(undefined8 **)(lVar7 + 0x10);
        *param_1 = puVar4;
        *param_2 = (long)puVar4;
        plVar5 = (long *)*puVar4;
        if (plVar5 != (long *)0x0) {
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar2) {
              *plVar5 = *plVar5 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        lVar7 = param_2[2];
        param_1[1] = __n;
        param_1[2] = lVar7 + param_3;
      }
      param_2[1] = param_3;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


