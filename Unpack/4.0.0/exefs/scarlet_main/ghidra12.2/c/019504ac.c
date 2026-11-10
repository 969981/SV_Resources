/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 019504ac; name: FUN_019504ac
 */


void FUN_019504ac(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 local_80;
  undefined8 *local_68;
  undefined8 *puStack_60;
  
  if (*(char *)(param_1 + 0x5c0) == '\0') {
    return;
  }
  uVar4 = FUN_01950664(&local_68,param_1 + 0x5c8);
  if (puStack_60 == local_68) {
    iVar2 = 0;
  }
  else {
    uVar4 = puStack_60[-4];
    FUN_019508d8(param_1,0);
    if (puStack_60 + -4 == local_68) {
      iVar2 = 1;
    }
    else {
      uVar4 = puStack_60[-8];
      FUN_019508d8(param_1,1);
      if (puStack_60 + -8 == local_68) {
        iVar2 = 2;
      }
      else {
        uVar4 = puStack_60[-0xc];
        FUN_019508d8(param_1,2);
        if (puStack_60 + -0xc == local_68) {
          iVar2 = 3;
        }
        else {
          uVar4 = puStack_60[-0x10];
          FUN_019508d8(param_1,3);
          if (puStack_60 + -0x10 == local_68) {
            iVar2 = 4;
          }
          else {
            uVar4 = puStack_60[-0x14];
            FUN_019508d8(param_1,4);
            if (puStack_60 + -0x14 == local_68) {
              iVar2 = 5;
            }
            else {
              uVar4 = puStack_60[-0x18];
              FUN_019508d8(param_1,5);
              if (puStack_60 + -0x18 == local_68) {
                iVar2 = 6;
              }
              else {
                iVar2 = 6;
                puVar3 = puStack_60 + -0x1c;
                do {
                  uVar4 = *puVar3;
                  FUN_019508d8(param_1,iVar2);
                  iVar2 = iVar2 + 1;
                  bVar1 = puVar3 != local_68;
                  puVar3 = puVar3 + -4;
                } while (bVar1);
              }
            }
          }
        }
      }
    }
  }
  FUN_019508d8(uVar4,param_1,iVar2);
  *(int *)(param_1 + 0x3b8) = *(int *)(param_1 + 0x3b8) + -1;
  FUN_0193777c(&local_68);
  return;
}


