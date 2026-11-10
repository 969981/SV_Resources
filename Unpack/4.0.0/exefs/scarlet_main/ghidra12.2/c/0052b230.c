/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0052b230; name: FUN_0052b230
 */


void FUN_0052b230(undefined8 param_1)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  
  if (((DAT_047f5240 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_047f5240), iVar3 != 0)) {
    FUN_00100190(PTR__mutex_047cdae0,&DAT_044c6de8,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_047f5240);
  }
                    /* try { // try from 0052b250 to 0052b253 has its CatchHandler @ 0052b370 */
  lVar4 = std::__libcpp_thread_get_current_id();
  bVar2 = DAT_047f5248 == 0 && lVar4 == 0;
  if (DAT_047f5248 != 0 && lVar4 != 0) {
    bVar2 = DAT_047f5248 == lVar4;
  }
  if (bVar2) {
    return;
  }
  if (((DAT_047f5238 & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(&DAT_047f5238), puVar1 = PTR_DAT_047cba80, iVar3 != 0)) {
    *(undefined8 *)(PTR_DAT_047cba80 + 0x10) = 0;
    *(undefined8 *)puVar1 = 0;
    *(undefined8 *)(puVar1 + 8) = 0;
                    /* try { // try from 0052b33c to 0052b347 has its CatchHandler @ 0052b358 */
    FUN_0052d820(PTR_LAB_047cdc40);
    __cxa_guard_release(&DAT_047f5238);
  }
  std::mutex::lock();
  DAT_047f5248 = lVar4;
  FUN_0052b380(param_1);
  DAT_047f5248 = 0;
  std::mutex::unlock();
  return;
}


