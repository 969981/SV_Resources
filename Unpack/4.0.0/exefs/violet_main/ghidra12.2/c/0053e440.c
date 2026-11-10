/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0053e440; name: FUN_0053e440
 */


void FUN_0053e440(__shared_weak_count *param_1)

{
  __shared_weak_count _Var1;
  long lVar2;
  long *plVar3;
  
  *(undefined **)param_1 = PTR_DAT_047cde48 + 0x10;
  FUN_01cfa410(param_1 + 0x90);
  lVar2 = *(long *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (lVar2 != 0) {
    plVar3 = *(long **)(param_1 + 0x88);
    FUN_00577168(lVar2);
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar2,0x38,8);
  }
  if (((byte)param_1[0x60] & 1) == 0) {
    _Var1 = param_1[0x40];
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x78) + 0x18))
              (*(long **)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x70),
               *(ulong *)(param_1 + 0x60) & 0xfffffffffffffffe,1);
    _Var1 = param_1[0x40];
  }
  if (((byte)_Var1 & 1) == 0) {
    _Var1 = param_1[0x20];
  }
  else {
    (**(code **)(**(long **)(param_1 + 0x58) + 0x18))
              (*(long **)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x50),
               *(ulong *)(param_1 + 0x40) & 0xfffffffffffffffe,1);
    _Var1 = param_1[0x20];
  }
  if (((byte)_Var1 & 1) == 0) {
    std::__shared_weak_count::~__shared_weak_count(param_1);
    return;
  }
  (**(code **)(**(long **)(param_1 + 0x38) + 0x18))
            (*(long **)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x30),
             *(ulong *)(param_1 + 0x20) & 0xfffffffffffffffe,1);
  std::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


