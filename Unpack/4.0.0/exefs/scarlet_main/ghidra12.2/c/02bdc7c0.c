/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02bdc7c0; name: _INIT_452
 */


void _INIT_452(void)

{
  DAT_0485e954 = nn::ldn::MakeIpv4Address('\x7f','\0','\0','\x01');
  DAT_0485e958 = nn::ldn::MakeIpv4Address(0xff,0xff,0xff,0xff);
  DAT_0485e95c = nn::ldn::MakeIpv4Address('\0','\0','\0','\0');
  DAT_0485e964 = 0;
  DAT_0485e960 = 0;
  DAT_0485e96c = 0xffff;
  DAT_0485e968 = 0xffffffff;
  nn::os::InitializeMutex((MutexType *)&DAT_0485e970,false,0);
  FUN_00100190(PTR__Mutex_047cc198,&DAT_0485e970,&PTR_LOOP_04483000);
  DAT_0485e990 = 0;
  FUN_00100190(FUN_02bdb704,&DAT_0485e990,&PTR_LOOP_04483000);
  FUN_00100190(&LAB_02789168,&DAT_0485e998,&PTR_LOOP_04483000);
  FUN_00100190(&LAB_02789234,&DAT_0485e9b8,&PTR_LOOP_04483000);
  FUN_00100190(&LAB_02789300,&DAT_0485e9d8,&PTR_LOOP_04483000);
  FUN_00100190(&LAB_027893cc,&DAT_0485e9f8,&PTR_LOOP_04483000);
  DAT_0485ea28 = 0;
  DAT_0485ea18 = 0;
  DAT_0485ea20 = 0;
  DAT_0485ea30 = 0;
  FUN_00100190(&LAB_027893e4,&DAT_0485ea18,&PTR_LOOP_04483000);
  return;
}


