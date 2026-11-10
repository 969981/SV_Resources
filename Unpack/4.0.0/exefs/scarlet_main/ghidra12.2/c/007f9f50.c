/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007f9f50; name: FUN_007f9f50
 */


void FUN_007f9f50(long *param_1,long *param_2)

{
  ErrorResultVariant *this;
  long lVar1;
  int local_88 [4];
  int local_78 [4];
  undefined4 local_68 [2];
  
  this = (ErrorResultVariant *)((ulong)local_88 | 4);
  lVar1 = *(long *)PTR_DAT_047d0970;
  do {
    switch((char)param_1[0x16]) {
    case '\x01':
    case '\x03':
      FUN_007c9ee4(param_1 + 0xd,lVar1);
      break;
    case '\x02':
      (**(code **)(*param_1 + 0x18))(local_78,param_1);
      *(int *)(param_1 + 7) = (int)param_1[7] + 1;
      FUN_00797e54(param_1 + 6,*(undefined2 *)((long)param_1 + 0x1a));
      if ((param_1[0x19] != 0) && (FUN_007f8900(local_88), local_88[0] != 0)) {
        FUN_018ff39c(local_78,local_88);
      }
      if (local_78[0] != 0) {
        local_88[0] = 0x2c03;
        local_68[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_68);
        if (local_78[0] != local_88[0]) {
          local_88[0] = 0x4c0d;
          local_68[0] = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_68);
          if (local_78[0] != local_88[0]) {
            local_88[0] = 0x2c09;
            local_68[0] = 0;
            nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)local_68);
            if (local_78[0] != local_88[0]) {
              FUN_018ff39c(param_1 + 0x17,local_78);
              *(undefined1 *)(param_1 + 0x16) = 3;
              break;
            }
            if (*(int *)((long)param_1 + 0xb4) == 0) break;
          }
          FUN_007c9ee4(param_1 + 0xd,(lVar1 * *(int *)((long)param_1 + 0xb4)) / 1000);
          break;
        }
      }
      break;
    case '\x11':
      *(undefined1 *)(param_1 + 0x16) = 1;
      break;
    case '\x12':
      *(undefined1 *)(param_1 + 0x16) = 2;
      break;
    case '\x14':
      (**(code **)(*param_2 + 0x38))(param_2,0);
      (**(code **)(*(long *)param_1[0xc] + 0x78))();
      *(undefined1 *)(param_1 + 0x16) = 4;
      return;
    }
  } while( true );
}


