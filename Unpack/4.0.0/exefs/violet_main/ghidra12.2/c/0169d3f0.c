/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0169d3f0; name: FUN_0169d3f0
 */


void FUN_0169d3f0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  
  puVar3 = PTR_DAT_047d89c0;
  puVar2 = PTR_DAT_047d89b8;
  puVar1 = PTR_DAT_047d89b0;
  while( true ) {
    if (((*puVar1 & 1) == 0) && (iVar4 = __cxa_guard_acquire(puVar1), iVar4 != 0)) {
      FUN_00100190(&LAB_00a2e36c,puVar2,&PTR_LOOP_04483000);
      __cxa_guard_release(puVar1);
    }
    *(undefined8 *)puVar3 = *(undefined8 *)puVar2;
    uVar5 = thunk_FUN_0169d498();
    if ((uVar5 & 1) != 0) break;
    nn::os::SleepThread(1000000);
  }
  return;
}


