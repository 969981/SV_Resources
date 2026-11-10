/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c4e600; name: FUN_00c4e600
 */


void FUN_00c4e600(void)

{
  int iVar1;
  long lVar2;
  void *__s;
  
  if (((DAT_04859410 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859410), iVar1 != 0)) {
    FUN_010538c0(&DAT_04859408,&LAB_02baad48);
    FUN_00100190(&LAB_02baad40,&DAT_04859408,&PTR_LOOP_04483000);
    __cxa_guard_release(&DAT_04859410);
  }
  lVar2 = nn::os::GetTlsValue(DAT_04859408);
  if (lVar2 == 0) {
    if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    __s = (void *)(**(code **)(*DAT_04859430 + 0x10))(DAT_04859430,0x12d0,8);
    memset(__s,0,0x12d0);
    nn::os::SetTlsValue(DAT_04859408,__s);
  }
  nn::os::GetTlsValue(DAT_04859408);
  return;
}


