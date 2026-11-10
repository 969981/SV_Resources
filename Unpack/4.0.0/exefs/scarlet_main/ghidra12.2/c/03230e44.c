/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03230e44; name: FUN_03230e44
 */


void FUN_03230e44(undefined8 *param_1)

{
  ulong uVar1;
  undefined1 *local_2b8;
  ulong local_2b0;
  undefined4 local_228;
  undefined1 local_220 [296];
  undefined1 auStack_f8 [216];
  
  *param_1 = &PTR_FUN_046ab220;
  if ((param_1[2] != 0) || (param_1[4] != 0)) {
    memcpy(auStack_f8,
           "\n**************************************************************\n* Leaks Detected:\n* \tMallocAllocator has %llu outstanding bytes over %llu allocations\n**************************************************************\n\n"
           ,0xd7);
    local_2b8 = local_220;
    local_220[0] = 0;
    local_2b0 = 0x8000012700000001;
    local_228 = 0;
    FUN_031c6c18(&local_2b8,auStack_f8,param_1[4],param_1[2]);
    printf("%s",local_2b8);
    fflush(*(FILE **)PTR_stdout_047cb860);
    uVar1 = local_2b0;
    local_2b0 = local_2b0 & 0xffffffff00000000;
    if ((-1 < (long)uVar1) && (local_2b8 != (undefined1 *)0x0)) {
      (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))();
    }
  }
  (**(code **)(PTR_DAT_047d1a08 + 8))(0,param_1,0);
  return;
}


