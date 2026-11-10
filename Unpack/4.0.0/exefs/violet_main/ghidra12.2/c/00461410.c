/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00461410; name: FUN_00461410
 */


bool FUN_00461410(long param_1,undefined8 param_2,ulong param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  time_t tVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long local_48;
  long local_38;
  
  local_38 = 0;
  local_48 = 0;
  if (*(ulong *)(param_1 + 0x60) < param_3) {
    uVar8 = 0x74;
    uVar7 = 299;
LAB_004614a4:
    FUN_004806c0(0x24,0x6c,uVar8,"external/openssl/crypto/rand/drbg_lib.c",uVar7);
    uVar9 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x150) == 0) {
      uVar7 = 0x131;
      uVar8 = 0x80;
      goto LAB_004614a4;
    }
    if (*(int *)(param_1 + 0x98) != 0) {
      uVar8 = 0x72;
      if (*(int *)(param_1 + 0x98) != 2) {
        uVar8 = 0x67;
      }
      uVar7 = 0x138;
      goto LAB_004614a4;
    }
    iVar5 = *(int *)(param_1 + 0x30);
    uVar10 = *(ulong *)(param_1 + 0x40);
    uVar11 = *(ulong *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x98) = 2;
    if ((*(long *)(param_1 + 0x50) != 0) && (*(long *)(param_1 + 0x168) == 0)) {
      uVar10 = *(long *)(param_1 + 0x50) + uVar10;
      iVar2 = iVar5;
      if (iVar5 < 0) {
        iVar2 = iVar5 + 1;
      }
      iVar5 = iVar5 + (iVar2 >> 1);
      uVar11 = *(long *)(param_1 + 0x58) + uVar11;
    }
    if (*(code **)(param_1 + 0x158) == (code *)0x0) {
      uVar9 = 0;
      if (uVar10 == 0) goto LAB_00461588;
    }
    else {
      uVar9 = (**(code **)(param_1 + 0x158))(param_1,&local_48,iVar5,uVar10,uVar11,0);
      if (uVar10 <= uVar9) {
LAB_00461588:
        if (uVar9 <= uVar11) {
          if ((*(long *)(param_1 + 0x50) == 0) || (*(code **)(param_1 + 0x168) == (code *)0x0)) {
            uVar10 = 0;
          }
          else {
            iVar5 = *(int *)(param_1 + 0x30);
            if (iVar5 < 0) {
              iVar5 = iVar5 + 1;
            }
            uVar10 = (**(code **)(param_1 + 0x168))
                               (param_1,&local_38,iVar5 >> 1,*(long *)(param_1 + 0x50),
                                *(undefined8 *)(param_1 + 0x58));
            if ((uVar10 < *(ulong *)(param_1 + 0x50)) || (*(ulong *)(param_1 + 0x58) < uVar10)) {
              FUN_004806c0(0x24,0x6c,0x6f,"external/openssl/crypto/rand/drbg_lib.c",0x157);
              goto LAB_004614b0;
            }
          }
          iVar5 = (*(code *)**(undefined8 **)(param_1 + 0x150))
                            (param_1,local_48,uVar9,local_38,uVar10,param_2,param_3);
          if (iVar5 == 0) {
            FUN_004806c0(0x24,0x6c,0x6c,"external/openssl/crypto/rand/drbg_lib.c",0x15e);
          }
          else {
            *(undefined4 *)(param_1 + 0x98) = 1;
            *(undefined4 *)(param_1 + 0x70) = 1;
            tVar6 = time((time_t *)0x0);
            *(time_t *)(param_1 + 0x78) = tVar6;
            if (*(int *)(param_1 + 0x88) != 0) {
              piVar1 = (int *)(param_1 + 0x8c);
              if (*(long *)(param_1 + 8) == 0) {
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = *piVar1 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              else {
                *piVar1 = *(int *)(*(long *)(param_1 + 8) + 0x8c);
              }
            }
          }
          goto LAB_004614b0;
        }
      }
    }
    FUN_004806c0(0x24,0x6c,0x6e,"external/openssl/crypto/rand/drbg_lib.c",0x14f);
  }
  uVar10 = 0;
LAB_004614b0:
  if ((local_48 != 0) && (*(code **)(param_1 + 0x160) != (code *)0x0)) {
    (**(code **)(param_1 + 0x160))(param_1,local_48,uVar9);
  }
  if ((local_38 != 0) && (*(code **)(param_1 + 0x170) != (code *)0x0)) {
    (**(code **)(param_1 + 0x170))(param_1,local_38,uVar10);
  }
  return *(int *)(param_1 + 0x98) == 1;
}


