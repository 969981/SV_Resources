/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026efcb8; name: FUN_026efcb8
 */


void FUN_026efcb8(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 local_50;
  char *pcStack_48;
  undefined8 local_40;
  long *local_38;
  
  if (param_1 != 0) {
    puVar1 = (undefined8 *)FUN_026ee48c();
    plVar2 = (long *)*puVar1;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      local_50 = 0x865a9dc04bbf40de;
      pcStack_48 = "SyncAnimComponent";
      local_40 = 0x11;
      local_38 = (long *)0x0;
      (**(code **)(*plVar2 + 0x130))(plVar2,&local_50);
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x20))();
      }
      local_50 = 0x865a9dc04bbf40de;
      pcStack_48 = "SyncAnimComponent";
      local_40 = 0x11;
      local_38 = (long *)0x0;
      (**(code **)(*plVar2 + 0x138))(plVar2,&local_50);
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x20))();
      }
      local_50 = 0x865a9dc04bbf40de;
      pcStack_48 = "SyncAnimComponent";
      local_40 = 0x11;
      local_38 = (long *)0x0;
      (**(code **)(*plVar2 + 0x140))(plVar2,&local_50);
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x20))();
      }
      local_50 = 0x865a9dc04bbf40de;
      pcStack_48 = "SyncAnimComponent";
      local_40 = 0x11;
      local_38 = (long *)0x0;
      (**(code **)(*plVar2 + 0x148))(plVar2,&local_50);
      if (local_38 != (long *)0x0) {
        (**(code **)(*local_38 + 0x20))();
      }
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  return;
}


