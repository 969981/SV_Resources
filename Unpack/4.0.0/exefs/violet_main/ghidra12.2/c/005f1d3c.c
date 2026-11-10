/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005f1d3c; name: FUN_005f1d3c
 */


void FUN_005f1d3c(__shared_weak_count *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_047ceb48;
  *(undefined **)param_1 = PTR_DAT_047ceb38 + 0x10;
  *(undefined **)(param_1 + 0x20) = puVar1 + 0x10;
  if ((param_1[0xa0] != (__shared_weak_count)0x0) && (lVar2 = *(long *)(param_1 + 0x78), lVar2 != 0)
     ) {
    *(long *)(param_1 + 0x80) = lVar2;
    (**(code **)(**(long **)(param_1 + 0x90) + 0x18))
              (*(long **)(param_1 + 0x90),lVar2,*(long *)(param_1 + 0x88) - lVar2,0x10);
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x58));
  *(undefined **)(param_1 + 0x20) = PTR_DAT_047ceb40 + 0x10;
  nn::os::FinalizeEvent((EventType *)(param_1 + 0x30));
  std::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


