/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00254738; name: FUN_00254738
 */


void FUN_00254738(IntrusiveDicNode *param_1)

{
  IntrusiveDicNode *pIVar1;
  
  pIVar1 = (IntrusiveDicNode *)nn::util::detail::IntrusiveDicImpl::FindIter();
  if (pIVar1 != param_1) {
    do {
      pIVar1 = (IntrusiveDicNode *)nn::util::detail::IntrusiveDicImpl::MoveIter(pIVar1,1);
      nn::util::detail::IntrusiveDicImpl::EraseImpl(param_1);
    } while (pIVar1 != param_1);
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x50));
  FUN_00254a3c(param_1 + 0x30,*(undefined8 *)(param_1 + 0x38));
  return;
}


