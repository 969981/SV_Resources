/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00bb1b68; name: overflow
 */


/* std::stringbuf::overflow(int) */

ulong __thiscall std::stringbuf::overflow(stringbuf *this,int param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  char cVar4;
  stringbuf *psVar5;
  stringbuf *psVar6;
  stringbuf *psVar7;
  stringbuf *psVar8;
  long lVar9;
  long lVar10;
  stringbuf *local_58;
  
  if (param_1 == -1) {
    uVar3 = 0;
  }
  else {
    psVar8 = *(stringbuf **)(this + 0x30);
    psVar5 = *(stringbuf **)(this + 0x38);
    lVar1 = *(long *)(this + 0x10);
    lVar2 = *(long *)(this + 0x18);
    if (psVar8 == psVar5) {
      if (((byte)this[0x60] >> 4 & 1) == 0) {
        return 0xffffffff;
      }
      lVar9 = *(long *)(this + 0x28);
      psVar5 = this + 0x40;
      lVar10 = *(long *)(this + 0x58);
      std::string::push_back((char)psVar5);
      if (((byte)this[0x40] & 1) == 0) {
        cVar4 = '\x16';
      }
      else {
        cVar4 = ((byte)*(undefined8 *)psVar5 & 0xfe) - 1;
      }
      std::string::resize((ulong)psVar5,cVar4);
      if (((byte)*psVar5 & 1) == 0) {
        psVar6 = this + 0x41;
        uVar3 = (ulong)((byte)*psVar5 >> 1);
      }
      else {
        uVar3 = *(ulong *)(this + 0x48);
        psVar6 = *(stringbuf **)(this + 0x50);
      }
      psVar5 = psVar6 + uVar3;
      psVar8 = psVar6 + ((long)psVar8 - lVar9);
      *(stringbuf **)(this + 0x28) = psVar6;
      psVar6 = psVar6 + (lVar10 - lVar9);
      *(stringbuf **)(this + 0x30) = psVar8;
      *(stringbuf **)(this + 0x38) = psVar5;
      *(stringbuf **)(this + 0x58) = psVar6;
    }
    else {
      psVar6 = *(stringbuf **)(this + 0x58);
    }
    local_58 = psVar8 + 1;
    psVar7 = this + 0x58;
    if (psVar6 <= local_58) {
      psVar7 = (stringbuf *)&local_58;
    }
    psVar7 = *(stringbuf **)psVar7;
    *(stringbuf **)(this + 0x58) = psVar7;
    if (((byte)this[0x60] >> 3 & 1) != 0) {
      if (((byte)this[0x40] & 1) == 0) {
        psVar6 = this + 0x41;
      }
      else {
        psVar6 = *(stringbuf **)(this + 0x50);
      }
      *(stringbuf **)(this + 0x10) = psVar6;
      *(stringbuf **)(this + 0x18) = psVar6 + (lVar2 - lVar1);
      *(stringbuf **)(this + 0x20) = psVar7;
    }
    if (psVar8 == psVar5) {
                    /* WARNING: Could not recover jumptable at 0x00bb1ce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*(long *)this + 0x68))(this,param_1 & 0xff);
      return uVar3;
    }
    uVar3 = (ulong)(param_1 & 0xff);
    *(stringbuf **)(this + 0x30) = local_58;
    *psVar8 = SUB41(param_1,0);
  }
  return uVar3;
}


