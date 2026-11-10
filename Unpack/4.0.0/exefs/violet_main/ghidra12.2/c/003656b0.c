/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003656b0; name: FUN_003656b0
 */


void FUN_003656b0(long param_1,byte *param_2)

{
  ulong *puVar1;
  byte bVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  bool bVar8;
  uint uVar9;
  long lVar10;
  ulong *puVar11;
  ulong uVar12;
  char cVar13;
  uint uVar14;
  ulong uVar15;
  
  puVar11 = (ulong *)(param_1 + 0x10);
  if ((*(byte *)puVar11 & 1) == 0) {
    if ((*(byte *)puVar11 & 0xfe) == 0x2c) {
      lVar4 = 0x116;
LAB_00365708:
      FUN_002cdbb0(puVar11,lVar4);
    }
  }
  else {
    uVar12 = *(ulong *)(param_1 + 0x10) & 0xfffffffffffffffe;
    if (uVar12 == *(long *)(param_1 + 0x18) + 1U) {
      lVar4 = uVar12 + 0xff;
      goto LAB_00365708;
    }
  }
  FUN_002cdcec(puVar11,0x22);
  uVar12 = 0;
  puVar1 = (ulong *)(param_1 + 0x18);
  bVar2 = *param_2;
joined_r0x0036573c:
  uVar6 = (ulong)bVar2;
  if ((bVar2 & 1) == 0) goto LAB_0036577c;
LAB_00365740:
  if ((uVar12 < *(ulong *)(param_2 + 8)) &&
     (bVar2 = *(byte *)(*(long *)(param_2 + 0x10) + uVar12), bVar2 != 0)) {
    do {
      uVar15 = (ulong)bVar2;
      uVar14 = (uint)bVar2;
      if (uVar14 - 0x20 < 0x5f) {
        if ((uVar14 == 0x5c) || (uVar14 == 0x22)) {
          if ((*(byte *)puVar11 & 1) == 0) {
            if ((*(byte *)puVar11 & 0xfe) == 0x2c) {
              lVar4 = 0x116;
LAB_003658d4:
              FUN_002cdbb0(puVar11,lVar4);
            }
          }
          else if ((*puVar11 & 0xfffffffffffffffe) == *puVar1 + 1) {
            lVar4 = (*puVar11 & 0xfffffffffffffffe) + 0xff;
            goto LAB_003658d4;
          }
          FUN_002cdcec(puVar11,0x5c);
        }
        if ((*(byte *)puVar11 & 1) == 0) {
          if ((*(byte *)puVar11 & 0xfe) == 0x2c) {
            lVar4 = 0x116;
LAB_0036575c:
            FUN_002cdbb0(puVar11,lVar4);
          }
        }
        else if ((*puVar11 & 0xfffffffffffffffe) == *puVar1 + 1) {
          lVar4 = (*puVar11 & 0xfffffffffffffffe) + 0xff;
          goto LAB_0036575c;
        }
        FUN_002cdcec(puVar11,uVar15);
        bVar2 = *param_2;
      }
      else {
        if ((uVar14 < 0x20) || (uVar14 == 0x7f)) {
          switch(uVar14) {
          case 8:
            if ((*(byte *)puVar11 & 1) == 0) {
              uVar6 = 0x16 - (ulong)(*(byte *)puVar11 >> 1);
              lVar4 = 0x16;
              if (uVar6 < 2) {
LAB_00365f60:
                FUN_002cdbb0(puVar11,((ulong)(0x101 - (int)uVar6) & 0xffffff00) + lVar4);
              }
            }
            else {
              uVar6 = (*puVar11 & 0xfffffffffffffffe) + ~*puVar1;
              if (uVar6 < 2) {
                lVar4 = (*puVar11 & 0xfffffffffffffffe) - 1;
                goto LAB_00365f60;
              }
            }
            puVar5 = &DAT_03c2baad;
            break;
          case 9:
            if ((*(byte *)puVar11 & 1) == 0) {
              uVar6 = 0x16 - (ulong)(*(byte *)puVar11 >> 1);
              lVar4 = 0x16;
              if (uVar6 < 2) {
LAB_00365fa8:
                FUN_002cdbb0(puVar11,((ulong)(0x101 - (int)uVar6) & 0xffffff00) + lVar4);
              }
            }
            else {
              uVar6 = (*puVar11 & 0xfffffffffffffffe) + ~*puVar1;
              if (uVar6 < 2) {
                lVar4 = (*puVar11 & 0xfffffffffffffffe) - 1;
                goto LAB_00365fa8;
              }
            }
            puVar5 = &DAT_03c54566;
            break;
          case 10:
            if ((*(byte *)puVar11 & 1) == 0) {
              uVar6 = 0x16 - (ulong)(*(byte *)puVar11 >> 1);
              lVar4 = 0x16;
              if (uVar6 < 2) {
LAB_00365ff0:
                FUN_002cdbb0(puVar11,((ulong)(0x101 - (int)uVar6) & 0xffffff00) + lVar4);
              }
            }
            else {
              uVar6 = (*puVar11 & 0xfffffffffffffffe) + ~*puVar1;
              if (uVar6 < 2) {
                lVar4 = (*puVar11 & 0xfffffffffffffffe) - 1;
                goto LAB_00365ff0;
              }
            }
            puVar5 = &DAT_03ca3bb7;
            break;
          default:
            if ((*(byte *)puVar11 & 1) == 0) {
              uVar6 = 0x16 - (ulong)(*(byte *)puVar11 >> 1);
              lVar4 = 0x16;
              if (uVar6 < 2) {
LAB_00366038:
                FUN_002cdbb0(puVar11,((ulong)(0x101 - (int)uVar6) & 0xffffff00) + lVar4);
              }
            }
            else {
              uVar6 = (*puVar11 & 0xfffffffffffffffe) + ~*puVar1;
              if (uVar6 < 2) {
                lVar4 = (*puVar11 & 0xfffffffffffffffe) - 1;
                goto LAB_00366038;
              }
            }
            FUN_0021d540(puVar11,&DAT_03bfadf3,2);
            if ((*(byte *)puVar11 & 1) == 0) {
              if ((*(byte *)puVar11 & 0xfe) == 0x2c) {
                lVar4 = 0x116;
LAB_00366140:
                FUN_002cdbb0(puVar11,lVar4);
              }
            }
            else if ((*puVar11 & 0xfffffffffffffffe) == *puVar1 + 1) {
              lVar4 = (*puVar11 & 0xfffffffffffffffe) + 0xff;
              goto LAB_00366140;
            }
            FUN_002cdcec(puVar11,0x30);
            if ((*(byte *)puVar11 & 1) == 0) {
              if ((*(byte *)puVar11 & 0xfe) == 0x2c) {
                lVar4 = 0x116;
LAB_0036618c:
                FUN_002cdbb0(puVar11,lVar4);
              }
            }
            else if ((*puVar11 & 0xfffffffffffffffe) == *puVar1 + 1) {
              lVar4 = (*puVar11 & 0xfffffffffffffffe) + 0xff;
              goto LAB_0036618c;
            }
            FUN_002cdcec(puVar11,0x30);
            cVar13 = "0123456789abcdef"[bVar2 >> 4];
            bVar2 = *(byte *)puVar11;
            if ((bVar2 & 1) != 0) goto LAB_003661b0;
LAB_00365c8c:
            if ((bVar2 & 0xfe) == 0x2c) {
              lVar4 = 0x116;
LAB_003661cc:
              FUN_002cdbb0(puVar11,lVar4);
            }
            goto LAB_003661d4;
          case 0xc:
            if ((*(byte *)puVar11 & 1) == 0) {
              uVar6 = 0x16 - (ulong)(*(byte *)puVar11 >> 1);
              lVar4 = 0x16;
              if (uVar6 < 2) {
LAB_003660a0:
                FUN_002cdbb0(puVar11,((ulong)(0x101 - (int)uVar6) & 0xffffff00) + lVar4);
              }
            }
            else {
              uVar6 = (*puVar11 & 0xfffffffffffffffe) + ~*puVar1;
              if (uVar6 < 2) {
                lVar4 = (*puVar11 & 0xfffffffffffffffe) - 1;
                goto LAB_003660a0;
              }
            }
            puVar5 = &DAT_03c24ccf;
            break;
          case 0xd:
            if ((*(byte *)puVar11 & 1) == 0) {
              uVar6 = 0x16 - (ulong)(*(byte *)puVar11 >> 1);
              lVar4 = 0x16;
              if (uVar6 < 2) {
LAB_003660e8:
                FUN_002cdbb0(puVar11,((ulong)(0x101 - (int)uVar6) & 0xffffff00) + lVar4);
              }
            }
            else {
              uVar6 = (*puVar11 & 0xfffffffffffffffe) + ~*puVar1;
              if (uVar6 < 2) {
                lVar4 = (*puVar11 & 0xfffffffffffffffe) - 1;
                goto LAB_003660e8;
              }
            }
            puVar5 = &DAT_03c32805;
          }
          FUN_0021d540(puVar11,puVar5,2);
          uVar12 = uVar12 + 1;
          bVar2 = *param_2;
          goto joined_r0x0036573c;
        }
        if ((uVar14 & 0xe0) == 0xc0) {
          lVar4 = 0;
          bVar8 = true;
          uVar14 = uVar14 & 0x1f;
joined_r0x00365a5c:
          bVar3 = false;
          uVar14 = uVar14 << 6;
          if ((uVar6 & 1) == 0) goto LAB_00365804;
LAB_00365950:
          lVar10 = *(long *)(param_2 + 8);
          if (uVar12 + 1 == lVar10) break;
          lVar7 = *(long *)(param_2 + 0x10);
          uVar9 = (uint)*(byte *)(lVar7 + uVar12 + 1);
          if ((uVar9 & 0xc0) != 0x80) break;
          uVar14 = uVar9 & 0x3f | uVar14;
          uVar15 = (ulong)uVar14;
          if (!bVar8) {
            if ((uVar12 + 2 != lVar10) &&
               (uVar9 = (uint)*(byte *)(lVar7 + uVar12 + 2), (uVar9 & 0xc0) == 0x80)) {
              uVar14 = uVar9 & 0x3f | uVar14 << 6;
              uVar15 = (ulong)uVar14;
              if (bVar3) goto LAB_003659d0;
              if (uVar12 + 3 != lVar10) {
                bVar2 = *(byte *)(lVar7 + uVar12 + 3);
                goto LAB_003659b8;
              }
            }
            break;
          }
        }
        else {
          if ((uVar14 & 0xf0) != 0xe0) {
            if ((uVar14 & 0xf8) == 0xf0) {
              bVar8 = false;
              lVar4 = 2;
              uVar14 = uVar14 & 7;
              goto joined_r0x00365a5c;
            }
            break;
          }
          bVar8 = false;
          bVar3 = true;
          lVar4 = 1;
          uVar14 = (uVar14 & 0xf) << 6;
          if ((uVar6 & 1) != 0) goto LAB_00365950;
LAB_00365804:
          uVar6 = uVar6 >> 1;
          if ((uVar12 + 1 == uVar6) || ((param_2[uVar12 + 2] & 0xc0) != 0x80)) break;
          uVar14 = param_2[uVar12 + 2] & 0x3f | uVar14;
          uVar15 = (ulong)uVar14;
          if (!bVar8) {
            if ((uVar12 + 2 == uVar6) || ((param_2[uVar12 + 3] & 0xc0) != 0x80)) break;
            uVar14 = param_2[uVar12 + 3] & 0x3f | uVar14 << 6;
            uVar15 = (ulong)uVar14;
            if (!bVar3) {
              if (uVar12 + 3 == uVar6) break;
              bVar2 = param_2[uVar12 + 4];
LAB_003659b8:
              if ((bVar2 & 0xc0) != 0x80) break;
              uVar15 = (ulong)(bVar2 & 0x3f | uVar14 << 6);
            }
          }
        }
LAB_003659d0:
        if ((0x10 < (uint)(uVar15 >> 0x10)) ||
           (uVar14 = (uint)uVar15, (uVar14 & 0x7ff800) == 0xd800)) break;
        uVar12 = uVar12 + 1 + lVar4;
        uVar9 = uVar14 - 0x10000;
        if (uVar14 < 0x10000) {
          if ((*(byte *)puVar11 & 1) == 0) {
            uVar6 = 0x16 - (ulong)(*(byte *)puVar11 >> 1);
            lVar4 = 0x16;
            if (uVar6 < 2) {
LAB_00365b00:
              FUN_002cdbb0(puVar11,((ulong)(0x101 - (int)uVar6) & 0xffffff00) + lVar4);
            }
          }
          else {
            uVar6 = (*puVar11 & 0xfffffffffffffffe) + ~*puVar1;
            if (uVar6 < 2) {
              lVar4 = (*puVar11 & 0xfffffffffffffffe) - 1;
              goto LAB_00365b00;
            }
          }
          FUN_0021d540(puVar11,&DAT_03bfadf3,2);
          cVar13 = "0123456789abcdef"[uVar15 >> 0xc];
          if ((*(byte *)puVar11 & 1) == 0) {
            if ((*(byte *)puVar11 & 0xfe) == 0x2c) {
              lVar4 = 0x116;
LAB_00365bc0:
              FUN_002cdbb0(puVar11,lVar4);
            }
          }
          else if ((*puVar11 & 0xfffffffffffffffe) == *puVar1 + 1) {
            lVar4 = (*puVar11 & 0xfffffffffffffffe) + 0xff;
            goto LAB_00365bc0;
          }
          FUN_002cdcec(puVar11,cVar13);
          cVar13 = "0123456789abcdef"[uVar15 >> 8 & 0xf];
          if ((*(byte *)puVar11 & 1) == 0) {
            if ((*(byte *)puVar11 & 0xfe) == 0x2c) {
              lVar4 = 0x116;
LAB_00365c68:
              FUN_002cdbb0(puVar11,lVar4);
            }
          }
          else if ((*puVar11 & 0xfffffffffffffffe) == *puVar1 + 1) {
            lVar4 = (*puVar11 & 0xfffffffffffffffe) + 0xff;
            goto LAB_00365c68;
          }
          FUN_002cdcec(puVar11,cVar13);
          cVar13 = "0123456789abcdef"[uVar15 >> 4 & 0xf];
          bVar2 = *(byte *)puVar11;
          if ((bVar2 & 1) == 0) goto LAB_00365c8c;
LAB_003661b0:
          if ((*puVar11 & 0xfffffffffffffffe) == *puVar1 + 1) {
            lVar4 = (*puVar11 & 0xfffffffffffffffe) + 0xff;
            goto LAB_003661cc;
          }
LAB_003661d4:
          FUN_002cdcec(puVar11,cVar13);
          cVar13 = "0123456789abcdef"[uVar15 & 0xf];
          bVar2 = *(byte *)puVar11;
          if ((bVar2 & 1) == 0) goto LAB_003661f0;
LAB_00365e94:
          if ((*puVar11 & 0xfffffffffffffffe) == *puVar1 + 1) {
            lVar4 = (*puVar11 & 0xfffffffffffffffe) + 0xff;
LAB_00366200:
            FUN_002cdbb0(puVar11,lVar4);
          }
        }
        else {
          if ((*(byte *)puVar11 & 1) == 0) {
            uVar6 = 0x16 - (ulong)(*(byte *)puVar11 >> 1);
            lVar4 = 0x16;
            if (uVar6 < 2) {
LAB_00365a84:
              FUN_002cdbb0(puVar11,((ulong)(0x101 - (int)uVar6) & 0xffffff00) + lVar4);
            }
          }
          else {
            uVar6 = (*puVar11 & 0xfffffffffffffffe) + ~*puVar1;
            if (uVar6 < 2) {
              lVar4 = (*puVar11 & 0xfffffffffffffffe) - 1;
              goto LAB_00365a84;
            }
          }
          FUN_0021d540(puVar11,&DAT_03bfadf3,2);
          uVar14 = uVar9 >> 10 & 0xffff | 0xd800;
          cVar13 = "0123456789abcdef"[uVar14 >> 0xc];
          if ((*(byte *)puVar11 & 1) == 0) {
            if ((*(byte *)puVar11 & 0xfe) == 0x2c) {
              lVar4 = 0x116;
LAB_00365b6c:
              FUN_002cdbb0(puVar11,lVar4);
            }
          }
          else if ((*puVar11 & 0xfffffffffffffffe) == *puVar1 + 1) {
            lVar4 = (*puVar11 & 0xfffffffffffffffe) + 0xff;
            goto LAB_00365b6c;
          }
          FUN_002cdcec(puVar11,cVar13);
          cVar13 = "0123456789abcdef"[(ulong)(uVar14 >> 8) & 0xf];
          if ((*(byte *)puVar11 & 1) == 0) {
            if ((*(byte *)puVar11 & 0xfe) == 0x2c) {
              lVar4 = 0x116;
LAB_00365c14:
              FUN_002cdbb0(puVar11,lVar4);
            }
          }
          else if ((*puVar11 & 0xfffffffffffffffe) == *puVar1 + 1) {
            lVar4 = (*puVar11 & 0xfffffffffffffffe) + 0xff;
            goto LAB_00365c14;
          }
          FUN_002cdcec(puVar11,cVar13);
          cVar13 = "0123456789abcdef"[(ulong)(uVar9 >> 0xe) & 0xf];
          if ((*(byte *)puVar11 & 1) == 0) {
            if ((*(byte *)puVar11 & 0xfe) == 0x2c) {
              lVar4 = 0x116;
LAB_00365cbc:
              FUN_002cdbb0(puVar11,lVar4);
            }
          }
          else if ((*puVar11 & 0xfffffffffffffffe) == *puVar1 + 1) {
            lVar4 = (*puVar11 & 0xfffffffffffffffe) + 0xff;
            goto LAB_00365cbc;
          }
          FUN_002cdcec(puVar11,cVar13);
          cVar13 = "0123456789abcdef"[(ulong)(uVar9 >> 10) & 0xf];
          if ((*(byte *)puVar11 & 1) == 0) {
            if ((*(byte *)puVar11 & 0xfe) == 0x2c) {
              lVar4 = 0x116;
LAB_00365d10:
              FUN_002cdbb0(puVar11,lVar4);
            }
          }
          else if ((*puVar11 & 0xfffffffffffffffe) == *puVar1 + 1) {
            lVar4 = (*puVar11 & 0xfffffffffffffffe) + 0xff;
            goto LAB_00365d10;
          }
          FUN_002cdcec(puVar11,cVar13);
          if ((*(byte *)puVar11 & 1) == 0) {
            uVar6 = 0x16 - (ulong)(*(byte *)puVar11 >> 1);
            lVar4 = 0x16;
            if (uVar6 < 2) {
LAB_00365d60:
              FUN_002cdbb0(puVar11,((ulong)(0x101 - (int)uVar6) & 0xffffff00) + lVar4);
            }
          }
          else {
            uVar6 = (*puVar11 & 0xfffffffffffffffe) + ~*puVar1;
            if (uVar6 < 2) {
              lVar4 = (*puVar11 & 0xfffffffffffffffe) - 1;
              goto LAB_00365d60;
            }
          }
          FUN_0021d540(puVar11,&DAT_03bfadf3,2);
          if ((*(byte *)puVar11 & 1) == 0) {
            if ((*(byte *)puVar11 & 0xfe) == 0x2c) {
              lVar4 = 0x116;
LAB_00365dc4:
              FUN_002cdbb0(puVar11,lVar4);
            }
          }
          else if ((*puVar11 & 0xfffffffffffffffe) == *puVar1 + 1) {
            lVar4 = (*puVar11 & 0xfffffffffffffffe) + 0xff;
            goto LAB_00365dc4;
          }
          FUN_002cdcec(puVar11,100);
          cVar13 = "0123456789abcdef"[(ulong)(uVar9 >> 8 & 3) | 0xc];
          if ((*(byte *)puVar11 & 1) == 0) {
            if ((*(byte *)puVar11 & 0xfe) == 0x2c) {
              lVar4 = 0x116;
LAB_00365e1c:
              FUN_002cdbb0(puVar11,lVar4);
            }
          }
          else if ((*puVar11 & 0xfffffffffffffffe) == *puVar1 + 1) {
            lVar4 = (*puVar11 & 0xfffffffffffffffe) + 0xff;
            goto LAB_00365e1c;
          }
          FUN_002cdcec(puVar11,cVar13);
          cVar13 = "0123456789abcdef"[(ulong)(uVar9 >> 4) & 0xf];
          if ((*(byte *)puVar11 & 1) == 0) {
            if ((*(byte *)puVar11 & 0xfe) == 0x2c) {
              lVar4 = 0x116;
LAB_00365e70:
              FUN_002cdbb0(puVar11,lVar4);
            }
          }
          else if ((*puVar11 & 0xfffffffffffffffe) == *puVar1 + 1) {
            lVar4 = (*puVar11 & 0xfffffffffffffffe) + 0xff;
            goto LAB_00365e70;
          }
          FUN_002cdcec(puVar11,cVar13);
          cVar13 = "0123456789abcdef"[(ulong)uVar9 & 0xf];
          bVar2 = *(byte *)puVar11;
          if ((bVar2 & 1) != 0) goto LAB_00365e94;
LAB_003661f0:
          if ((bVar2 & 0xfe) == 0x2c) {
            lVar4 = 0x116;
            goto LAB_00366200;
          }
        }
        FUN_002cdcec(puVar11,cVar13);
        bVar2 = *param_2;
      }
      uVar6 = (ulong)bVar2;
      uVar12 = uVar12 + 1;
      if ((bVar2 & 1) != 0) goto LAB_00365740;
LAB_0036577c:
      if ((uVar6 >> 1 <= uVar12) || (bVar2 = param_2[uVar12 + 1], bVar2 == 0)) break;
    } while( true );
  }
  if ((*(byte *)puVar11 & 1) == 0) {
    if ((*(byte *)puVar11 & 0xfe) != 0x2c) goto LAB_00366264;
    lVar4 = 0x116;
  }
  else {
    if ((*puVar11 & 0xfffffffffffffffe) != *puVar1 + 1) goto LAB_00366264;
    lVar4 = (*puVar11 & 0xfffffffffffffffe) + 0xff;
  }
  FUN_002cdbb0(puVar11,lVar4);
LAB_00366264:
  FUN_002cdcec(puVar11,0x22);
  return;
}


