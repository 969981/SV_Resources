/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0298a298; name: FUN_0298a298
 */


bool FUN_0298a298(undefined8 param_1,undefined4 param_2,byte param_3,char param_4)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  
  if ((param_3 != 0) || (param_4 == '\n')) {
    if ((param_3 < 2) && (param_4 != '\n')) {
      uVar3 = 0;
      puVar4 = &DAT_045fe900;
      while( true ) {
        uVar2 = FUN_0124e480(param_1);
        iVar1 = thunk_FUN_01972c08(uVar2,param_2,*puVar4);
        if ((iVar1 != 0) &&
           (((0x7017fU >> (uVar3 & 0x3f) & 1) != 0 || ((0xfe80UL >> (uVar3 & 0x3f) & 1) != 0))))
        break;
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 0x18;
        if (uVar3 == 0x13) {
          return false;
        }
      }
    }
    else {
      uVar2 = FUN_0124e480(param_1);
      iVar1 = thunk_FUN_01972c08(uVar2,param_2,9);
      if (iVar1 == 0) {
        uVar2 = FUN_0124e480(param_1);
        iVar1 = thunk_FUN_01972c08(uVar2,param_2,10);
        if (iVar1 == 0) {
          uVar2 = FUN_0124e480(param_1);
          iVar1 = thunk_FUN_01972c08(uVar2,param_2,0xb);
          if (iVar1 == 0) {
            uVar2 = FUN_0124e480(param_1);
            iVar1 = thunk_FUN_01972c08(uVar2,param_2,0xc);
            if (iVar1 == 0) {
              uVar2 = FUN_0124e480(param_1);
              iVar1 = thunk_FUN_01972c08(uVar2,param_2,0xd);
              if (iVar1 == 0) {
                uVar2 = FUN_0124e480(param_1);
                iVar1 = thunk_FUN_01972c08(uVar2,param_2,0xe);
                if (iVar1 == 0) {
                  uVar2 = FUN_0124e480(param_1);
                  iVar1 = thunk_FUN_01972c08(uVar2,param_2,0xf);
                  if (iVar1 == 0) {
                    uVar2 = FUN_0124e480(param_1);
                    thunk_FUN_01972c08(uVar2,param_2,0x10);
                    uVar2 = FUN_0124e480(param_1);
                    iVar1 = thunk_FUN_01972c08(uVar2,param_2,0x11);
                    if (iVar1 == 0) {
                      uVar2 = FUN_0124e480(param_1);
                      thunk_FUN_01972c08(uVar2,param_2,0x12);
                      uVar2 = FUN_0124e480(param_1);
                      thunk_FUN_01972c08(uVar2,param_2,0x13);
                      uVar2 = FUN_0124e480(param_1);
                      thunk_FUN_01972c08(uVar2,param_2,0x14);
                      uVar2 = FUN_0124e480(param_1);
                      thunk_FUN_01972c08(uVar2,param_2,0x15);
                      uVar2 = FUN_0124e480(param_1);
                      thunk_FUN_01972c08(uVar2,param_2,0x16);
                      uVar2 = FUN_0124e480(param_1);
                      thunk_FUN_01972c08(uVar2,param_2,0x17);
                      uVar2 = FUN_0124e480(param_1);
                      thunk_FUN_01972c08(uVar2,param_2,0x18);
                      uVar2 = FUN_0124e480(param_1);
                      iVar1 = thunk_FUN_01972c08(uVar2,param_2,0x19);
                      if (iVar1 == 0) {
                        uVar2 = FUN_0124e480(param_1);
                        iVar1 = thunk_FUN_01972c08(uVar2,param_2,0x1a);
                        if (iVar1 == 0) {
                          uVar2 = FUN_0124e480(param_1);
                          iVar1 = thunk_FUN_01972c08(uVar2,param_2,0x1b);
                          return iVar1 != 0;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return true;
}


