/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00b0a30c; name: FUN_00b0a30c
 */


void FUN_00b0a30c(SystemEventType *param_1)

{
  GattDescriptor *pGVar1;
  ushort *puVar2;
  ushort *puVar3;
  size_t __n;
  short sVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  MultiWaitHolderType *pMVar9;
  undefined4 *puVar10;
  ulong uVar11;
  ushort uVar12;
  ulong uVar13;
  char *pcVar14;
  long lVar15;
  GattService *pGVar16;
  long lVar17;
  ulong uVar18;
  BleConnectionInfo local_2b8 [8];
  byte local_2b0;
  char acStack_2af [63];
  ulong local_270;
  undefined1 auStack_268 [520];
  
  if (*(long *)(param_1 + 0x2d0) == 0) {
    return;
  }
  pMVar9 = (MultiWaitHolderType *)nn::os::TryWaitAny((MultiWaitType *)(param_1 + 0x118));
  if (pMVar9 == (MultiWaitHolderType *)0x0) {
    return;
  }
  puVar10 = (undefined4 *)nn::os::GetMultiWaitHolderUserData(pMVar9);
  switch(*puVar10) {
  case 1:
    lVar17 = *(long *)(param_1 + 0x2d0);
    iVar8 = nn::bluetooth::GetBleScanResult((BleScanResult *)(lVar17 + 0x944c),0x14);
    if (0 < iVar8) {
      uVar6 = nn::bluetooth::StopBleScanSmartDevice();
      if (uVar6 == 0) {
        *(int *)(lVar17 + 0xadec) = iVar8;
        *(undefined1 *)(lVar17 + 0xadf0) = 0;
      }
      else {
        if (((uVar6 & 0x3ffe00) == 0x32400) && ((uVar6 & 0x1ff) == 0x71)) {
          *(undefined1 *)(lVar17 + 0xadf0) = 0;
        }
        *(undefined1 *)(lVar17 + 0xae01) = 1;
      }
    }
    break;
  case 2:
    lVar17 = *(long *)(param_1 + 0x2d0);
    uVar7 = nn::bluetooth::GetBleConnectionInfoList(local_2b8,4);
    uVar11 = (ulong)uVar7;
    uVar6 = *(uint *)(lVar17 + 0xadf4);
    uVar18 = (ulong)uVar6;
    if (uVar6 != 0xffffffff) {
      if (0 < (int)uVar7) {
        pcVar14 = acStack_2af;
        do {
          if (((pcVar14[-5] == *(char *)(lVar17 + 0xadf8)) &&
              (pcVar14[-4] == *(char *)(lVar17 + 0xadf9))) &&
             ((pcVar14[-3] == *(char *)(lVar17 + 0xadfa) &&
              (((pcVar14[-2] == *(char *)(lVar17 + 0xadfb) &&
                (pcVar14[-1] == *(char *)(lVar17 + 0xadfc))) &&
               (*pcVar14 == *(char *)(lVar17 + 0xadfd))))))) goto LAB_00b0a7a0;
          pcVar14 = pcVar14 + 0xc;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      *(undefined8 *)(lVar17 + 0xadf8) = 0;
      *(undefined4 *)(lVar17 + 0xadf4) = 0xffffffff;
      goto LAB_00b0a49c;
    }
    if (0 < (int)uVar7) {
      pcVar14 = acStack_2af;
      do {
        if ((((pcVar14[-5] == *(char *)(lVar17 + 0xb01d)) &&
             (pcVar14[-4] == *(char *)(lVar17 + 0xb01e))) &&
            (pcVar14[-3] == *(char *)(lVar17 + 0xb01f))) &&
           (((pcVar14[-2] == *(char *)(lVar17 + 0xb020) &&
             (pcVar14[-1] == *(char *)(lVar17 + 0xb021))) &&
            (*pcVar14 == *(char *)(lVar17 + 0xb022))))) {
          uVar18 = *(ulong *)(pcVar14 + -9);
          *(undefined4 *)(lVar17 + 0xadfc) = *(undefined4 *)(pcVar14 + -1);
          *(ulong *)(lVar17 + 0xadf4) = uVar18;
          goto LAB_00b0a7a0;
        }
        pcVar14 = pcVar14 + 0xc;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    goto LAB_00b0a6dc;
  case 3:
    lVar17 = *(long *)(param_1 + 0x2d0);
    FUN_00b0a1a4(lVar17);
    pGVar16 = (GattService *)(lVar17 + 0x30);
    uVar11 = nn::bluetooth::GetGattService
                       (pGVar16,(GattAttributeUuid *)(lVar17 + 0xb008),*(uint *)(lVar17 + 0xadf4));
    if ((uVar11 & 1) != 0) {
      puVar2 = (ushort *)(lVar17 + 0x9340);
      puVar3 = (ushort *)(lVar17 + 0x4d38);
      *(undefined2 *)(lVar17 + 0x630) = 1;
      uVar12 = *puVar3;
      uVar11 = 0;
      do {
        sVar4 = nn::bluetooth::GattService::GetCharacteristics
                          ((GattCharacteristic *)pGVar16,(int)lVar17 + (uint)uVar12 * 0x238 + 0x638)
        ;
        uVar12 = *puVar3 + sVar4;
        *puVar3 = uVar12;
        uVar11 = uVar11 + 1;
        pGVar16 = pGVar16 + 0x30;
      } while (uVar11 < *(ushort *)(lVar17 + 0x630));
      if (uVar12 != 0) {
        uVar11 = (ulong)*puVar2;
        uVar18 = 0;
        do {
          pGVar1 = (GattDescriptor *)(lVar17 + uVar18 * 0x238 + 0x638);
          uVar5 = nn::bluetooth::GattCharacteristic::GetDescriptors
                            (pGVar1,(int)lVar17 + ((uint)uVar11 & 0xffff) * 0x230 + 0x4d40);
          uVar12 = *(ushort *)(lVar17 + 0x9448);
          *(ushort *)(lVar17 + 0x9448) = uVar12 + 1;
          *(GattDescriptor **)(lVar17 + (ulong)uVar12 * 8 + 0x9348) = pGVar1;
          uVar13 = (ulong)*puVar2;
          uVar11 = uVar13 + uVar5;
          if (uVar5 != 0) {
            lVar15 = lVar17 + 0x4d40 + uVar13 * 0x230;
            do {
              uVar12 = *(ushort *)(lVar17 + 0x9448);
              uVar13 = uVar13 + 1;
              *(ushort *)(lVar17 + 0x9448) = uVar12 + 1;
              *(long *)(lVar17 + (ulong)uVar12 * 8 + 0x9348) = lVar15;
              lVar15 = lVar15 + 0x230;
            } while (uVar13 < uVar11);
          }
          *puVar2 = (ushort)uVar11;
          uVar18 = uVar18 + 1;
        } while (uVar18 < *puVar3);
      }
    }
    param_1 = param_1 + 0x60;
    break;
  case 4:
    *(undefined1 *)(*(long *)(param_1 + 0x2d0) + 0xae02) = 1;
    param_1 = param_1 + 0x90;
    break;
  case 5:
    lVar17 = *(long *)(param_1 + 0x2d0);
    nn::bluetooth::GetGattOperationResult((BleClientGattOperationInfo *)local_2b8);
    if (local_2b8[0] == (BleConnectionInfo)0x0) {
      if (local_2b0 < 6) {
        uVar6 = 1 << (ulong)(local_2b0 & 0x1f);
        if ((uVar6 & 0x31) == 0) {
          if ((uVar6 & 10) != 0) {
            *(undefined1 *)(lVar17 + 0xae00) = 0;
          }
        }
        else if (local_270 != 0) {
          __n = 0;
          if (local_270 < 0x200) {
            __n = 0x200 - local_270;
          }
          memset((void *)(lVar17 + 0xae04 + local_270),0,__n);
          memcpy((void *)(lVar17 + 0xae04),auStack_268,local_270);
          *(short *)(lVar17 + 0xb004) = (short)local_270;
        }
      }
    }
    else {
      *(undefined1 *)(lVar17 + 0xae01) = 1;
    }
    nn::os::ClearSystemEvent(param_1 + 0xc0);
  default:
    return;
  }
LAB_00b0a75c:
  nn::os::ClearSystemEvent(param_1);
  return;
LAB_00b0a7a0:
  if ((uint)uVar18 == 0xffffffff) {
LAB_00b0a49c:
    memset((void *)(lVar17 + 0xb01c),0,0x148);
    *(undefined1 *)(lVar17 + 0xadf1) = 0;
  }
  else {
    iVar8 = nn::bluetooth::ConfigureBleMtu((uint)uVar18,0x200);
    if (iVar8 == 0) {
      *(undefined1 *)(lVar17 + 0xadf1) = 1;
    }
    else {
      *(undefined1 *)(lVar17 + 0xae01) = 1;
    }
  }
LAB_00b0a6dc:
  param_1 = param_1 + 0x30;
  goto LAB_00b0a75c;
}


