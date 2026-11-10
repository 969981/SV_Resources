/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 027bd414; name: FUN_027bd414
 */


void FUN_027bd414(long *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long local_50;
  long lStack_48;
  long local_40;
  long local_38;
  
  local_50 = *(long *)(param_2 + 0x18);
  FUN_027be340(&local_40,&local_50,param_2);
  if (*(int *)(local_40 + 0x200) == 3) {
    local_50 = local_40;
    lStack_48 = local_38;
    if (local_38 != 0) {
      plVar1 = (long *)(local_38 + 8);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = *plVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_027be3c0(local_40 + 0x938,&local_50,local_40 + 0x6c0);
    FUN_027be3c4(&local_50);
  }
  *param_1 = local_40;
  param_1[1] = local_38;
  local_40 = 0;
  local_38 = 0;
  FUN_027be41c(&local_40);
  return;
}


